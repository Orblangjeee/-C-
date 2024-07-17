#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int score[5][5] = { 0 };

	for (int i = 0; i < 4; i++) {
		printf("%d 번째 입력 : ",i+1);
		for (int k = 0; k < 4; k++) {
			scanf("%d", &score[i][k]);
		}
	}
	

	for (int i = 0; i < 4; i++) {
		printf("\n%d 번째 점수 :", (i+1));
		for (int k = 0; k < 4; k++) {
			score[i][4] += score[i][k];
			score[4][i] += score[k][i];
			printf("%d ", score[i][k]); 
		}
		printf("\n 총점 : %d", score[i][4]);
		printf("\n 과목별 총점 : %d", score[4][i]);
		score[4][4] += score[i][4];
	}
	printf("\n 모든 점수 합 : %d", score[4][4]);
	
}
