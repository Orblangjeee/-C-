#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	
	char arr[100];
	scanf("%s", &arr);
	int length = strlen(arr);
	int result = 0;
	for (int i = 0; i < length / 2; i++) {
		if (arr[i] == arr[length - (i+1)]) {
			result++;
		}
	}

	if (result == length / 2) {
		printf("회문 입니다.");
	}
	else {
		printf("회문이 아닙니다.");
	}
}
