#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BubbleSort(int arr[],const int length) {
	int temp = 0;
	for (int i = 0; i < length; i++) {
		for (int k = length - 1 ; k > 0; k--) {
			if (arr[k -1] < arr[k]) {
				temp = arr[k];
				arr[k] = arr[k-1];
				arr[k-1] = temp;
			}
		}
	}
}

int main()
{
	int arr[7];
	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
	}

	BubbleSort(arr,7);

	for (int i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}
}
