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
## 第八周作業
第八周第一份作業(暴力質數判別)
```cpp

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0) bad=1;
    }
    if(bad==0)printf("%d 是質數,n");

    else printf("%d 不好，不是質數",n);
}
```
第八周第二份作業(列出質數)
#include <stdio.h>
```cpp
int main()
{
	int a;
	scanf("%d",&a);

	for(int n=2;n<=a;n++){

		int bad=0;
		for(int i=2;i<n;i++){
			if(n%i==0)bad=1;
		}
		if(bad==0)printf("%d ",n);
	}
}
```
第八周第三份作業(加總平均)
#include <stdio.h>
```cpp
int main()
{
    printf("請輸入5個數字(要加總): ");

    int n;
    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        sum += n;
    }
    printf("總和是:%d",sum );
}
```
第八周第四份作業(印出直角三角形)
```cpp
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++)printf(" ");///空格數+
        for(int k=1;k<=i;k++)printf("*");///*數等於樓層數
        printf("\n");
    }
}
```
第八周第五份作業(2for印出直角三角形)
```cpp
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            for(int k=1;k<=n;k++){
                if(k<=n-i)printf(" ");
                else printf("*");
            }
            printf("\n");
    }
}
```
第八周第六份作業(2while印出直角三角形)
```cpp
#include <stdio.h>

int  main()
{
	int n;
	scanf("%d",&n);

	int i=1;
	while(i<=n){

		int k=1;
		while(k<=n){

		if(k<=n-i)printf(" ");
		else printf("*");
			k++;
		}

		printf("\n");
		i++;
	}
}
```
## 第十周作業
第十周第一份作業(認識陣列)
```cpp
#include <stdio.h>
int main()
{
    int a[4] = {10,20,30,40};///4個盒子

    for(int i=0;i<4;i++){
            printf("a[%d] = %d \n",i,a[i]);
    }
}
```
第十周第二份作業(分析陣列)
```cpp
#include <stdio.h>

int main()
{
    int a[4];///宣告有四格 a[0] a[1] a[2] a[3]
    printf("a[0] : %d\n",a[0] );///把a[0]拿來用(出現亂碼)

    a[0] =33;///在a[0]裡放33
    printf("a[0] : %d\n",a[0] );///把a[0]拿來用
}
```
第十周第三份作業(陣正反印印)
```cpp
#include <stdio.h>///測試列引法

int main()
{
    int a[4] = { 10, 20, 30, 40 };
    for(int i=0; i<4; i++){
        printf("%d ", a[i] );
    }
    printf("上面正著印，下面倒著印\n");
    for(int i=3; i>=0; i--){
        printf("%d ",a[i]);
    }
}
```
##第十週實習課
陣列資料反轉
```cpp
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[30];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--){
		printf("%d\n",a[i]);
	}
}
```
找出高分與低分
```cpp
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	printf("\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if (a[i]>=80)
		printf("%d ",a[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		if (a[i]<40)
		printf("%d ",a[i]);
	}
}
```
及格與不及格
```
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	printf("\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if (a[i]>=80)
		printf("%d ",a[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		if (a[i]<40)
		printf("%d ",a[i]);
	}
}
```
```cpp
array-輸入12個月的平均溫度，計算年均溫
#include <stdio.h>

int main()
{
	float a[12];
	float sum=0,avg;
	for(int i=0;i<12;i++){
		printf("%d月的平均溫度:",i+1);
		scanf("%f",&a[i]);
	}
	printf("===================\n");
	for(int i=0;i<12;i++){
	sum+=a[i];
	}
	avg=sum/12;
	printf("年平均溫度為:%f",avg);
}
```
##第十一週實習課
股票最佳買點與賣點
```cpp
#include <stdio.h>
int main()
{
	int a[30],n;
	scanf(" %d",&n);
	int buy,sale,ans=0,i,j;
	for(i=0;i<n;i++)
	{
		scanf(" %d", &a[i]);
	}
	for(i=0; i<(n-1); i++)
	{
		for(j=i+1; j<n; j++)
		{
			if((a[j]-a[i])>ans)
			{
				buy=a[i];
				sale=a[j];
				ans=a[j]-a[i];			
			}
		}
	}
	printf("請按任意鍵繼續 . . . \n");
	printf("最大利潤=%d-%d=%d\n",sale,buy,sale-buy);
}
```
矩陣順時針旋轉
```cpp
#include <stdio.h>

int main()
{	
	int a[30][30], m, n;
	scanf(" %d %d",&m, &n);
	printf("\n");
	for(int i=0; i<m; i++)
	{
		for(int k=0; k<n; k++)
		{
			scanf(" %d",&a[i][k]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0; k<m; k++)
		{
		printf("%2d ",a[m-k-1][i]);
		}
		printf("\n");
	}

}
```
矩陣乘法
```cpp
#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0; i<n;i++)
	{
		for(j=0; j<n; j++)
		{
			scanf(" %d",&a[i][j]);
		}
	}
		for(i=0; i<n;i++)
	{
		for(j=0; j<n; j++)
		{
			scanf(" %d",&b[i][j]);
		}
	}
	for(i=0; i<n;i++)
	{
		for(j=0; j<n; j++)
		{
			c[i][j]=0;
			for(k=0; k<n; k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0; i<n;i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
```
##第十二週實習課
均標人數
```cpp
#include <stdio.h>
int a[20];
int main()
{
	int i, j, sum=0,high=0;
	float avg;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0){break;}
		if(a[i]>=100)i--;
	}	
	j=i;
	for(i=0; i<j; i++)
	{
		sum+=a[i];
	}
	avg=(float)sum/j;
	for(i=0; i<j; i++)
	{
		if(a[i]>=avg)
		high++;
	}
	printf("%.2f %d", avg, high);
}
```
均標與前標計算 
```cpp
#include <stdio.h>
int a[100];
int main()
{
	int n, i , j=0, sum=0, sumo=0;
	float b, B=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	b=(float)sum/n;
	for(i=0; i<n; i++)
	{
		if(a[i]>=b)
		{
			sumo+=a[i];
			j++;
		}
	}
	B=(float)sumo/j;
	printf("均標:%.1f\n",b);
	printf("前標:%.1f\n",B);
	
	
}
```
Fibonacci 第3i項
```cpp
#include <stdio.h>
int a[51];
int main()
{
	int n,i;
	scanf("%d", &n);
	for(i=0; i<n;i++)
	{
		a[0]=0,a[1]=1;
		a[i+2]=a[i+1]+a[i];
	}
	for(i=0; i<n; i++)
	{
		if(i%3==0)printf("%d ",a[i]);
	}
}
```
[Array] Sorting
```cpp
#include <stdio.h>
int a[10];
int main()
{
	int temp;
	for(int i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0; j<10; j++)
	{
		for(int i=0; i<10; i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("輸入10個整數：由小到大排序：");
	for(int i=0; i<11; i++)
	{
		if(a[i]!=0)printf("%d ",a[i]);
	}
	printf("\n");
}
```
##第十三週實習課作業
計算1到10的整數平方
```cpp
#include <stdio.h>
int square(int n)
{
	return n*n;
}
int main()
{
	for(int i=1; i<=10;i++)
	{
		printf("%d ",square(i));
	}
	printf("\n");
}
```
function-兩數平方和
```cpp
/*兩個平方和相加*/
#include <stdio.h>
int fuction(int a, int b)
{
	return a*a+b*b;
}
int main()
{
	int i, k;
	scanf("%d%d", &i, &k);
	printf("兩個平方和相加:%d",fuction(i,k));
}
```
函式-三角形列印
```cpp
#include <stdio.h>
void fuction(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<i; j++)
		{
			printf(" ");
		}
		for(int j=n; j>i; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
int main()
{
	int f;
	printf("請輸入一個數:");
	scanf("%d",&f);
	fuction(f);

}
```
Function-反轉數字
```cpp
#include <stdio.h>
int fun(int n)
{
	if(n<1|| n>9999)
	return 0;
	else
	{
		int ans=0;
		while(n>1)
		{
			ans=ans*10+n%10;
			n=n/10;
		}
		return ans;
	}
}
int main()
{
	int x;
	scanf("%d",&x);
	printf("請在1到9999輸入一個數字:數字反轉為:%d\n",fun(x));
}
```
##程式廣場(較特別題目)
字母頻率
```cpp
#include <stdio.h>
int ans[256];
int main()
{
	char c;
	while(scanf("%c",&c)==1)
	{
		ans[c]++;
	}
	for(int c='A'; c<='Z'; c++)
	{
		if(ans[c]>0) printf("%c:%d\n",c,ans[c]);
	}
	for(int c='a'; c<='z'; c++)
	{
		if(ans[c]>0) printf("%c:%d\n",c,ans[c]);
	}
}
```
