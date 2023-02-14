#include <stdio.h>
int sum(int a,int b);///declare

int main()
{
    int ans=sum(2,3);///call
    printf("ans: %d\n", ans);
}
int sum(int a,int b)///define
{
    return a+b;
}///回傳return只能一次
