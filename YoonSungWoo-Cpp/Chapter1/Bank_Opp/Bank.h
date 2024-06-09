#pragma once

typedef struct Infor{
	int id = 0;
	std::string name;
	int money = 0;
} Info;


class Bank {	
public:
	Info MakeAcount();
	void ManagingAcount();
	void Deposit();
	void Withdraw();
	void PrintAccount();
};
