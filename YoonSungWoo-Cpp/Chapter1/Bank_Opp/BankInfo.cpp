#include <iostream>
#include "Bank.h"

using namespace std;

int main() 
{
	Bank bank;
	int input = 0;
	while (true) {
		cout << "---Menu---\n1.계좌개설\n2.입 금\n3.출 금\n4.전체고객 잔액조회\n5.프로그램 종료\n선택: ";
		cin >> input;
		if (input == 5) {
			break;
		}
		switch (input)
		{
		case 1:
			bank.ManagingAcount();
			break;
		case 2:
			bank.Deposit();
			break;
		case 3:
			bank.Withdraw();
			break;
		case 4:
			bank.PrintAccount();
			break;
		default:
			cout << "다시 입력해주십시오." << endl;
			break;
		}
	}
	
}
