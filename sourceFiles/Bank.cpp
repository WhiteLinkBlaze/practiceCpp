#include "header/Bank.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Bank::Bank()
	:maxLen(100), count(0)
{
	userList = new Account *[maxLen];
}

void Bank::ShowMenu()
{
	cout << "-----Menu----" << endl;
	cout << "1. 계좌 개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void Bank::MakeAccount()
{
	int id;
	char name[20];
	int balance;
	cout << "[계좌개설]" << endl;
	cout << "계좌 ID: "; cin >> id;
	cout << "이름: "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << endl;

	userList[count++] = new Account(id, balance, name);
}

void Bank::DepositeMoney()
{
	int money;
	int id;
	cout << "[입금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "입금액: "; cin >> money;

	for (int i = 0; i < count; i++)
	{
		if (userList[i]->GetAccID() == id)
		{
			userList[i]->Deposit(money);
			cout << "입금 완료" << endl;
			return;
		}
	}
	cout << "[BANK]유효하지 않은 ID입니다." << endl;
}

void Bank::WithdrawMoney()
{
	int money;
	int id;
	cout << "[출금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "출금액: "; cin >> money;

	for (int i = 0; i < count; i++)
	{
		if (userList[i]->GetAccID() == id)
		{
			if (userList[i]->Withdraw(money) == 0)
			{
				cout << "잔액 부족" << endl;
				return;
			}
			cout << "출금 완료" << endl;
			return;
		}
	}
	cout << "[BANK]유효하지 않은 ID입니다." << endl;
}

void Bank::ShowAllAccInfo()
{
	for (int i = 0; i < count; i++)
	{
		userList[i]->ShowAccInfo();
		cout << endl;
	}
}

Bank::~Bank()
{
	for (int i = 0; i < count; i++)
	{
		delete userList[i];
	}
	cout << "[BANK] 종료합니다" << endl;
	delete [] userList;
}

void bankTestFunctionLoop()
{
	int choice;
	Bank bank;
	while (1)
	{
		choice = 0;
		bank.ShowMenu();
		cin >> choice;
		switch (choice)
		{
		case BANK::MAKE:
			bank.MakeAccount();
			break;
		case BANK::DEPOSIT:
			bank.DepositeMoney();
			break;
		case BANK::WITHDRAW:
			bank.WithdrawMoney();
			break;
		case BANK::INQUIRE:
			bank.ShowAllAccInfo();
			break;
		case BANK::EXIT:
			return;
		}
		getchar(); getchar();
		system("cls");
	}
}
