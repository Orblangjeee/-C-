#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<stdlib.h>

int main(void)
{
    int i;
   
    srand((int)time(NULL));

    for (i = 0; i < 6; i++) {
        
        printf("주사위 %d의 결과 : %d \n",i+1, (rand() % 10 % 6)+1);
        
    }
    return 0;
}
