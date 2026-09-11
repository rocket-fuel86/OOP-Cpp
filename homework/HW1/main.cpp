#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	string title;
	string author;
	int pageCount = 22;
public:
	void Init(string ti, string aut, int pc)
	{
		title = ti;
		author = aut;
		pageCount = pc;
	}
	void PrintInfo()
	{
		cout << "Title: " << title << endl
			<< "Author: " << author << endl
			<< "Page count: " << pageCount << endl;
	}
	void Input()
	{
		cout << "Enter title: ";
		cin >> title;

		cout << "Enter author: ";
		cin >> author;

		cout << "Enter page count: ";
		cin >> pageCount;
	}
	void SetTitle(string ti)
	{
		if (!ti.empty())
		{
			title = ti;
		}
	}
	void SetAuthor(string aut)
	{
		if (!aut.empty())
		{
			author = aut;
		}
	}
	void SetPageCount(int pc)
	{
		if (pc >= 10)
		{
			pageCount = pc;
		}
	}
	string GetTitle()
	{
		return title;
	}
	string GetAuthor()
	{
		return author;
	}
	int GetPageCount()
	{
		return pageCount;
	}
};

class BankAccount
{
private:
	string accountNumber;
	string ownerFullName;
	double balance = 0;
public:
	void Init(string an, string ofn, int bal)
	{
		accountNumber = an;
		ownerFullName = ofn;
		balance = bal;
	}
	void PrintInfo()
	{
		cout << "Account number: " << accountNumber << endl
			<< "Owner full name: " << ownerFullName << endl
			<< "Balance: " << balance << endl;
	}
	void Input()
	{
		cout << "Enter account number: ";
		cin >> accountNumber;

		cout << "Enter owner full name: ";
		cin >> ownerFullName;

		cout << "Enter balance: ";
		cin >> balance;
	}
	void Deposit(double amount)
	{
		if (amount > 0)
		{
			balance += amount;
		}
		else
		{
			cout << "Amount must be greater than zero" << endl;
		}
	}
	void Withdraw(double amount)
	{
		if (balance != 0 && amount <= balance && amount > 0)
		{
			balance -= amount;
		}
		else
		{
			cout << "Not enough money on balance" << endl;
		}
	}
	void SetAccountNumber(string an)
	{
		if (an.length() >= 4 && an.length() <= 17)
		{
			accountNumber = an;
		}
	}
	void SetOwnerFullName(string ofn)
	{
		if (ofn.length() >= 2)
		{
			ownerFullName = ofn;
		}
	}
	void SetBalance(double bal)
	{
		if (bal >= 0)
		{
			balance = bal;
		}
	}
	string GetAccountNumber()
	{
		return accountNumber;
	}
	string GetOwnerFullName()
	{
		return ownerFullName;
	}
	double GetBalance()
	{
		return balance;
	}
};

int main()
{
	Book book;

	book.Init("Metro 2033", "Dmitry Glukhovsky", 384);
	book.PrintInfo();

	cout << endl;

	book.SetPageCount(500);
	cout << "New page count: " << book.GetPageCount() << endl;

	cout << endl;

	BankAccount account;

	account.Init("12345678", "Ivan Ivanov", 1000);
	account.PrintInfo();

	cout << endl;

	account.Deposit(500);
	cout << "After deposit: " << account.GetBalance() << endl;

	account.Withdraw(300);
	cout << "After withdrawal: " << account.GetBalance() << endl;

	account.Withdraw(2000);

	return 0;
}