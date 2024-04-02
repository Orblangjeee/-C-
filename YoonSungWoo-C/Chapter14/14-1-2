#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

Swap3(int* n1, int* n2, int* n3) {
	int temp = 0;
	temp = *(n2);
	*(n2) = *(n1);
	*(n1) = *(n3);
	*(n3) = temp;
}

int main()
{
	int num1 = 1, num2 = 2, num3 = 3;
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);
}
