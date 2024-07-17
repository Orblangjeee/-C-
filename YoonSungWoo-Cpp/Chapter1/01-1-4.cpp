#include <iostream>
int main() {
	int number = 0;
	while (true) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end):";
		std::cin >> number;
		if (number == -1) {
			std::cout << "프로그램을 종료합니다.";
			break;
		}
			
		std::cout << "이번 달 급여 :";
		int sum = 50 + number * 0.12;
		std::cout << sum<<std::endl;
	}

	}
	
