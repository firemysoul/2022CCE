#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[13]={31, 28, 31, 30 ,31, 30, 31, 31, 30, 31, 30, 31};
	printf("%d", a[n-1]);
}
