#include "Bankomat.h"

Bankomat::Bankomat()
{
	id = 0;
	sum = 0;
	minAmount = 0;
	maxAmount = 0;
}

Bankomat::Bankomat(int i, int s, int min, int max)
{
	id = i;
	sum = s;
	minAmount = min;
	maxAmount = max;
}

void Bankomat::Init(int i, int s, int min, int max)
{
	id = i;
	sum = s;
	minAmount = min;
	maxAmount = max;
}

void Bankomat::Deposit(int amount)
{
	if (amount > 0 && amount % 10 == 0)
	{
		sum += amount;
	}
}

void Bankomat::Withdraw(int amount)
{
	if (amount >= minAmount 
		&& amount <= maxAmount 
		&& amount <= sum
		&& amount % 10 == 0
		)
	{
		sum -= amount;
	}
}

void Bankomat::SetId(int i)
{
	id = i;
}

void Bankomat::SetSum(int s)
{
	sum = s;
}

void Bankomat::SetMinAmount(int min)
{
	minAmount = min;
}

void Bankomat::SetMaxAmount(int max)
{
	maxAmount = max;
}

int Bankomat::GetId()
{
	return id;
}

int Bankomat::GetSum()
{
	return sum;
}

int Bankomat::GetMinAmount()
{
	return minAmount;
}

int Bankomat::GetMaxAmount()
{
	return maxAmount;
}
