#include "header/Account.h"
#include "header/AccountHandler.h"
#include "header/BankingCommonDec.h"
#include "header/NormalAccount.h"
#include "header/HighCreditAccount.h"
#include "header/MyString.h"

using MY_STRING::String;

AccountHandler::AccountHandler()
	:accNum(0)
{
}

void AccountHandler::ShowMenu() const
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌 개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌 정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}
void AccountHandler::MakeAccount()
{
	int choice;
	cout<<"[계좌 종류 선택]" << endl;
	cout<<"1. 보통 계좌 2. 신용 계좌"<<endl;
	cout<<"선택: ";
	cin>>choice;
	if(choice==BANK_SYSTEM::NORMAL)
		NormalMakeAccount();
	else if(choice==BANK_SYSTEM::CREDIT)
		CreditMakeAccount();
	else
		cout<<"유효하지 않은 선택입니다."<<endl;
}
void AccountHandler::NormalMakeAccount()
{
	int id;
	String name;
	int balance = 0;
	int interestRate = 0;
	cout << "[보통 계좌 개설]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	cout << "이름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> balance;
	cout << "이자율: ";
	cin >> interestRate;
	accArr[accNum++] = new NormalAccount(id, balance, name, interestRate);
}
void AccountHandler::CreditMakeAccount()
{
	int id;
	String name;
	int balance = 0;
	int interestRate = 0;
	int creditLevel = 0;
	cout << "[신용 계좌 개설]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	cout << "이름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> balance;
	cout << "이자율: ";
	cin >> interestRate;
	cout << "신용 등급 (1. LEVEL_A / 2. LEVEL_B / 3. LEVEL_C): ";
	int levelChoice;
	cin >> levelChoice;
	switch (levelChoice)
	{
	case 1:
		creditLevel = BANK_SYSTEM::LEVEL_A;
		break;
	case 2:
		creditLevel = BANK_SYSTEM::LEVEL_B;
		break;
	case 3:
		creditLevel = BANK_SYSTEM::LEVEL_C;
		break;
	default:
		cout << "유효하지 않은 선택입니다. LEVEL_C로 설정됩니다." << endl;
		creditLevel = BANK_SYSTEM::LEVEL_C;
		break;
	}
	accArr[accNum++] = new HighCreditAccount(id, balance, name, interestRate, creditLevel);
}

void AccountHandler::DepositMoney()
{
	int id;
	int money;
	cout << "[입금]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	cout << "입금액: ";
	cin >> money;
	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "입금 완료" << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID입니다." << endl;
}
void AccountHandler::WithdrawMoney()
{
	int id;
	int money;
	cout << "[출금]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	cout << "출금액: ";
	cin >> money;
	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Withdraw(money);
			cout << "출금 완료" << endl;
			return;
		}
	}
		
}
void AccountHandler::ShowAllAccInfo() const
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}

AccountHandler::~AccountHandler()
{
	for (int i = 0; i < accNum; i++)
	{
		delete accArr[i];
	}
}

void AccountLoop()
{
	AccountHandler manager;
	int choice;
	system("clear");
	while (true)
	{
		manager.ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;
		system("clear");
		switch (choice)
		{
		case BANK_SYSTEM::MAKE:
			manager.MakeAccount();
			break;
		case BANK_SYSTEM::DEPOSIT:
			manager.DepositMoney();
			break;
		case BANK_SYSTEM::WITHDRAW:
			manager.WithdrawMoney();
			break;
		case BANK_SYSTEM::INQUIRE:
			manager.ShowAllAccInfo();
			break;
		case BANK_SYSTEM::EXIT:
			return;
		default:
			cout << "유효하지 않은 선택입니다." << endl;
		}
		getchar();
		getchar();
		system("clear");
	}
}