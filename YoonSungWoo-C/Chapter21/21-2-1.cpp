#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>

int main(void)
{
    int sum = 0;
    char input[20];

    scanf("%s", input);
    
    for (int i = 0; i < strlen(input); i++) {
        input[i] -= 0;
        if (input[i] -0 > 47 && input[i] < 58) {
            sum += input[i] - 48;
        }
    }

    printf("%d",sum);

}
