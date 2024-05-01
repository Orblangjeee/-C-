#include <stdio.h>

int main() 
{
	FILE* mystory = fopen("mystory.txt", "at");
	if (mystory == NULL) {
		puts("파일 오픈 실패");
		return -1;
	}

	fputs("#즐겨먹는 음식: 짬뽕, 탕수육 \n", mystory);
	fputs("#취미: 축구 \n", mystory);
	
	
	fclose(mystory);

	
}
