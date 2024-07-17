#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
	int arr[5];
	int max = 0, min = 0, sum = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (i ==0 || arr[i] > max) {
			max = arr[i];
		}
		if (i == 0 || arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}
	
	printf("최댓값 : %d 최솟값: %d 총합 : %d", max, min, sum);

}
