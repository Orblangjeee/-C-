#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multi(int n) {
	if (n == 0 || n == 1) {
		return 1 + n;
	}
	else {
		return Multi(n-1) * 2;
	}
}
int main() {
	int n = 0;
	scanf("%d", &n);
	printf("2의 %d승은 %d", n, Multi(n));
}
