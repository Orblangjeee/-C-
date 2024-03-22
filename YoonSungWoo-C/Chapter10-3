#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b = 0;
    scanf("%d %d", &a, &b);
    if (a < b) {
        goto table;
    }
    else {
        int temp = a;
        a = b;
        b = a;
        goto table;
    }
table:
    for (int i = 2; i <= b; i++) {
        if(a % i == 0 && b % i == 0) printf("%d ", i);
    }
}
