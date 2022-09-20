#include<stdio.h>
main()
{
    printf("請輸入某數n:");
    int n;
    scanf("%d",&n);
    printf("用8除餘%d\n",n%8);
    printf("用9除餘%d\n",n%9);
    printf("用15除餘%d\n",n%15);
}
