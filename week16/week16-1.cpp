#include <stdio.h>

int main()
{
    printf("請輸入一個數字、一個字元\n");
    int a;
    scanf("%d", &a);

    char c;
    scanf("%c", &c);

    printf("數字是: %d字元是: %c", a, c);
}
