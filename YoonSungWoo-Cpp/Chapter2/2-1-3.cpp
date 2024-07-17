
#include <iostream>

 
void SwapPointer(int* ptr1, int* ptr2) {
    std::cout << ptr1 << std::endl;
    std::cout << ptr2 << std::endl;
 
    int* temp = ptr2;
    ptr2 = ptr1;
    ptr1 = temp;

    std::cout << *ptr1 << std::endl;
    std::cout << *ptr2 << std::endl;
}

int main()
{
    int num1 = 5;
    int* ptr1 = &num1;
    int num2 = 10;
    int* ptr2 = &num2;
    SwapPointer(ptr1, ptr2);
}
