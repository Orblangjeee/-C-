#include <iostream>

int main() {
	int input = 0;
	std::cin >> input;
	for (int i = 1; i < 10; i++) {
		std::cout << input << "*" << i << "="<< input * i << std::endl;
	}
}
