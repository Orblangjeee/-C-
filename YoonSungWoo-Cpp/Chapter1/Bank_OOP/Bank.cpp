#include <iostream>
#include "Bank.h"
using namespace std;

Info information[10];
int number = 0;

Info Bank::MakeAcount() {
	Info info;
	cout << "[계좌개설]\n계좌ID: ";
	cin >> info.id;
	cout << "이름: ";
	cin >> info.name;
	cout << "입금액: ";
	cin >> info.money;
	return info;
}

void Bank::ManagingAcount() {

	information[number] = MakeAcount();
	number++;
}

void Bank::Deposit() {
	int id, money;
	Info* info = NULL;
	cout << "[입 금]\n계좌ID: ";
	cin >> id;
	
	for (int i = 0; i < number; i++) {
		if (information[i].id == id) {
			info = &information[i];
			break;
		}
	} 

	if (info == nullptr) {
		cout << "존재하지 않는 계좌 입니다. 다시 입력해주세요." << endl;
		Bank::Deposit();
	}
	else {
		cout << "입금액: ";
		cin >> money;
		info->money += money;

		cout << "입금완료" << endl;
	}
	
	
}

void Bank::Withdraw() {
	int id, money;
	Info* info = NULL;
	cout << "[출 금]\n계좌ID: ";
	cin >> id;

	for (int i = 0; i < number; i++) {
		if (information[i].id == id) {
			info = &information[i];
			break;
		}
	}
	if (info == nullptr) {
		cout << "존재하지 않는 계좌 입니다. 다시 입력해주세요." << endl;
		Bank::Withdraw();
	}
	else {
		cout << "출금액: ";
		cin >> money;
		if (info->money > money) {
			info->money -= money;
			cout << "출금완료" << endl;
		}
		else {
			cout << "잔액이 부족합니다." << endl;
		}
	}
	
	
}

void Bank::PrintAccount() {
	
	for (int i = 0; i < number; i++) {
		cout << "계좌ID: " << information[i].id << endl;
		cout << "이 름: " << information[i].name << endl;
		cout << "잔 액: " << information[i].money << endl;
	}

}

