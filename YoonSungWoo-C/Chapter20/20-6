#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int computer[3] = { 0 };
    int user[3] = { 0 };
    int strike = 0, ball =0, count =0;
    srand((int)time(NULL));

    printf("Start Game!\n");
    
    // 컴퓨터가 숫자 3개 뽑기
    for (int i = 0; i < 3; i++) {
        computer[i] = rand() % 10;
        //중복방지
        if (i > 0 && computer[i] == computer[i - 1]) {
            computer[i] = rand() % 10;
        }

    }

    while (1) {
        count++; //실행 횟수
        strike = 0, ball = 0; //초기화

        //3개 숫자 입력
        printf("3개의 숫자 선택 : ");
        for (int i = 0; i < 3; i++) {
            scanf("%d", &user[i]);
        }

        //strike인지 ball인지 체크
        for (int i = 0; i < 3; i++) { //9번 비교
            for (int j = 0; j < 3; j++) {
                //숫자가 같다면
                if (computer[i] == user[j]) {
                    //순서도 같나요?
                    if (i == j) {
                        strike++;
                    }
                    else {
                        ball++;
                    }
                }
            }
        }

        printf("%d번째 도전 결과 : %d strike, %d ball\n", count, strike, ball);

        if (strike == 3) {
            printf("GameOver");
            break;
        }

    }
}
