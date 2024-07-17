#include <iostream>

void AddValue(int &num1) {
    num1++;
    std::cout<< num1 <<std::endl;
}

void ChangeFlag(int& num1) {
    num1 *= -1;
    std::cout << num1<<std::endl;
}

int main()
{
    int value = 21;
    AddValue(value);
    ChangeFlag(value);
}
