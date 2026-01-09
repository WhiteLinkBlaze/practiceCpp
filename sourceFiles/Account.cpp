#include "header/Account.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

Account::Account()
	:accID(0), balance(0),cusName(NULL)
{
}

Account::Account(Account& ref): accID(ref.accID), balance(ref.balance)
{
	int len = strlen(ref.cusName) + 1;
	cusName = new char[len];
	strcpy(cusName, ref.cusName);
}

Account::Account(int ID, int money, const char* name)
	:accID(ID), balance(money)
{
	int len = strlen(name) + 1;
	cusName = new char[len];
	strcpy(cusName, name);
}

int Account::GetAccID() const
{
	return accID;
}

void Account::Deposit(int money)
{
	if (money <= 0)
	{
		cout << "[ACCOUNT]유효하지 않은 값입니다." << endl;
		return;
	}
	balance += money;
}

int Account::Withdraw(int money)
{
	if (money > balance)
	{
		cout << "[ACCOUNT]유효하지 않은 값입니다." << endl;
		return 0;
	}
	balance -= money;
	return money;
}

void Account::ShowAccInfo() const
{
	cout << "계좌 번호: " << accID << endl;
	cout << "잔액: " <<balance<< endl;
	cout << "고객 이름: " << cusName<< endl;
}

Account::~Account()
{
	cout << "삭제합니다." << endl;
	ShowAccInfo();
	delete cusName;
}

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
	int id;
	char name[100];
	int balance = 0;
	cout << "[계좌 개설]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	cout << "이름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> balance;
	accArr[accNum++] = new Account(id, balance, name);
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
	while (true)
	{
		manager.ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;
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
		system("clear");
	}
}