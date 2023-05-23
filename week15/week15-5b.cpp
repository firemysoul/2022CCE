#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[11];
	int b[11];
	for(int i=0; i<n; i++)
	{
		scanf("%d" , &a[i]);
	}
	for(int i=0; i<n; i++)
	{
		scanf("%d" , &b[i]);
	}
		for(int i=0; i<n; i++)
	{
		printf("%d ", a[i]+b[i]);
	}
}
