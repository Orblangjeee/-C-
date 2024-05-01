#include <stdio.h>

int main() 
{
	FILE* mystory = fopen("mystory.txt", "wt");
	if (mystory == NULL) {
		puts("파일 오픈 실패");
		return -1;
	}

	fputs("#이름: 윤성우 \n", mystory);
	fputs("#주민번호: 900208 - 1012589 \n", mystory);
	fputs("#전화번호: 010-1111-2222 \n", mystory);
	
	
	fclose(mystory);

}
