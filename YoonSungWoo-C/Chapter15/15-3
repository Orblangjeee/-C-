#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int arr[10];
	int num = 0;
	int even = 0;
	int odd = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		if (num % 2 != 0) {
			arr[odd] = num;
			odd++;
		}
		else {
			arr[9 - even] = num;
			even++;
		}
		
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

}
