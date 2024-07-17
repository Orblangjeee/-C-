#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Calculate(int(*arr)[4]) {
	int temp[4] = { 0 };
	for (int i = 0; i < 2 ;i++) {
		for (int k = i; k < 3-i; k++) {
			temp[0] = arr[k + i][3 -i];
			arr[k+i][3-i] = arr[i][k+i];

			temp[1] = arr[3-i][3 - k-i];
			arr[3-i][3 - k-i] = temp[0];
			
			arr[i][k+i] = arr[3 - k-i][i];
			arr[3 - k-i][i] = temp[1];
		}
	}
}

int main()
{
	int arr[4][4] = { {1,2,3,4}, {5,6,7,8},
					{9,10,11,12}, {13, 14, 15, 16} };
	int n = 0;

	Calculate(arr); //한번 돌리기
	Calculate(arr); //두번 돌리기
	Calculate(arr); //세번 돌리기
	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 4; k++) {
			printf("%d ", arr[i][k]);
		}
		printf("\n");
	}
}
