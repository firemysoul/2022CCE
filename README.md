# 2022cce
## 第六周作業

### 第六周第一份作業(畫星星)
```cpp
#include <stdio.h>
int main()
{
    for(int a=5;a>0;a--){
        for(int b=0;b<a;b++){
            printf("*");
        }
        printf("i:%d¬P¬P\n",a);
    }
}
### 第六周第二份作業(畫金字塔)
```cpp
#include <stdio.h>

int main()
{
    for(int a=1;a<=5;a++){
        int speace=5-a, star=2*a-1;
        for(int k=0;k<speace;k++) printf(" ");
        for(int k=0;k<star;k++) printf("*");
        printf("\n");
    }
}
### 第六周第三份作業(求最大公因數)
```cpp
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
### 第六周第四份作業(求最大公因數-輾轉乘除法)
```cpp
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1){
        c = a%b;
    printf("老大:%d 老二:%d 老三:%d\n",a,b,c);
    if(c==0)break;
        a=b;
        b=c;
    }
    printf("答案b: %d",b);
}
```
