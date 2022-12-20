///試試看全部數看能否整除
#include <stdio.h>

int main()
{
    printf("請輸入要約分的兩個數:");
    int a,b;
    scanf("%d %d", &a, &b);

    int ans;///答案
    for(int i=1; i<a;i++)
    if(a%i==0 && b%i==0){
        ans = i;
    }
    printf("ans: %d 可約分",ans);
}

