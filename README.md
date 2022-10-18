# 2022cce
## 第六周作業
 第六周第一份作業(畫星星)
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
```
第六周第二份作業(畫金字塔)
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
```
第六周第三份作業(求最大公因數)
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
```
第六周第四份作業(求最大公因數-輾轉乘除法)
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
## 第七周作業
第七周第一份作業(long long int)
```cpp
///long long int
///很長 很長 的整數
#include <stdio.h>

int main()
{
    ///在x86的電腦架構下 int是32位元 可裝9-10位數
    int n=9876543210;
    printf("int 印出來 %d\n",n);///印錯了
    ///可裝19-20位數
    long long int a=9876543210;///10位數
    printf("long long int 印出來 %lld\n",a);
                                    ///long long int縮寫
}
```
第七周第二份作業(long long int最大公因數暴力解)
```cpp
///最大公因數改用long long int
#include <stdio.h>
int main()

{
    long long int a,b;
    scanf("%lld %lld",&a,&b);

    long long int ans;
    for(long long int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("最大公因數是;%lld",ans);
}
```
第七周第三份作業(long long int最大公因數輾轉相除法)
```cpp
///改用輾轉相除法,找最大公因數
///long long int vison
#include <stdio.h>
int main()
{
    long long int a,b,c;///老大,老二,老三
    scanf("%lld %lld",&a,&b);
    while(1){
        c =a %b;
        printf("a:%lld b%lld c%lld\n",a,b,c);
        if(c==0) break;
        a = b;
        b = c;
    }
    printf("答案是: %lld\n",b);
}
```
第七周第四份作業()
```cpp
///剝皮法
#include <stdio.h>

int main()
{
         int n;
         scanf("%d",&n);

            printf("現在的個位數:%d\n", n%10);
            n = n /10;

            printf("現在的個位數:%d\n", n%10);
            n = n /10;

            printf("現在的個位數:%d\n", n%10);
            n= n /10;

            printf("現在的個位數:%d\n", n%10);
            n = n /10;

            printf("現在的個位數:%d\n", n%10);
            n = n /10;

            printf("現在的個位數:%d\n", n%10);
            n = n /10;

            printf("現在的個位數:%d\n", n%10);
            n = n /10;

            printf("現在的個位數:%d\n", n%10);
            n = n /10;

            printf("現在的個位數:%d\n", n%10);
            n = n /10;

            printf("現在的個位數:%d\n", n%10);
            n = n /10;

            printf("現在的個位數:%d\n", n%10);
            n = n /10;

}
```
