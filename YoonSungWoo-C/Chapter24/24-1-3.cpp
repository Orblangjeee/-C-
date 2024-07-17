#include <stdio.h>

int main() 
{
	int ch;
	char str[20];
	FILE* mystory = fopen("mystory.txt", "rt");
	if (mystory == NULL) {
		puts("파일 오픈 실패");
		return -1;
	}

	while (fgets(str, sizeof(str), mystory) != NULL) {
		fputs(str, stdout);
	}
	
	if (feof(mystory) != 0) {
		puts("파일출력 끝");
	}
	else {
		puts("파일출력 실패");
	}
	fclose(mystory);

	
}
