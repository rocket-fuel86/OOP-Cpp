#pragma once

class Bankomat
{
	int id;
	int sum;
	int minAmount;
	int maxAmount;
public:
	Bankomat();
	Bankomat(int i, int s, int min, int max);
	void Init(int i, int s, int min, int max);
	
	void Deposit(int amount);
	void Withdraw(int amount);

	void SetId(int i);
	void SetSum(int s);
	void SetMinAmount(int min);
	void SetMaxAmount(int max);

	int GetId();
	int GetSum();
	int GetMinAmount();
	int GetMaxAmount();
};

