#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Odd(int arr[]) {
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}

void Even(int* arr) {
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	
}

int main()
{
	int num[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	Odd(num);
	Even(num);

}
