#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SquareByValue(int n) {
	return n * n;
}

int SquareByReference(int * n) {
	return *(n) * *(n);
}

int main()
{
	int num = 5;
	
	printf("%d %d ", SquareByValue(num), SquareByReference(&num));
}
