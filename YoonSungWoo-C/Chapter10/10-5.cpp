#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int prime = 0;
	for (int i = 2; prime < 10; i++) {
		for (int j = 2; j <= i; j++) {
			if (j != i && j != 1 && i % j ==0) {
				break;
			}
			else if( j == i && i % j ==0)
			{
				prime++;
				printf("%d ", i);
			}
			
		}
	}
	
}
