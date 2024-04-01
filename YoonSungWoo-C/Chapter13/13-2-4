#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int* start = arr;
	int* end = arr + 5;
	for (int i = 0; i < (sizeof(arr)/4)/2; i++) {
		int temp = 0;
		temp = *(start + i);
		*(start + i) = *(end - i);
		*(end - i) = temp;
	}
	
	for (int i = 0; i < sizeof(arr) / 4; i++) {
		printf("%d ", arr[i]);
	}
}
