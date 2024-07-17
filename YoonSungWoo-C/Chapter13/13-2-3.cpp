#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr = arr + 4;
	int sum = 0;
	for (int i = 0; i < sizeof(arr)/4; i++) {
		sum += *(ptr - i);
		printf("%d ", sum);
	}
}
