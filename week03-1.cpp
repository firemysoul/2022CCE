#include <stdio.h>

int main()
{
    int a,b;
    printf("請輸入兩個數");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d除以%d的餘數是%d",a,b,a%b);

}
