#include <stdio.h>
int a[111];
int main()
{
	int s;
	scanf("%d", &s);
	for(int i=0; i<s; i++)
	{
		scanf("%d", &a[i]);
		printf("%d,", a[i]*a[i]);
	}
	printf("\n");
}
