#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input;
	while (1) {
		input = getchar();
		if (input > 64 && input < 91) {
			input += 32;
		}
		else if (input > 96 && input < 123) {
			input -= 32;
		}
		if (input == EOF) {
			break;
		}
		putchar(input);
	}
	return 0;
}
