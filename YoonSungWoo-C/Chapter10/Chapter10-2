#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a, b = 0;

int MultiTables() {
    for (int i = a; i <= b; i++) {
        for (int j = 1; j < 10; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }
}

int main(void)
{
    
    scanf("%d %d", &a, &b);
    if (a < b) {
        MultiTables();
    }
    else {
        int temp = a;
        a = b;
        b = a;
        MultiTables();
    }
    
}
