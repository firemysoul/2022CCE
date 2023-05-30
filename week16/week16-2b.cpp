#include <stdio.h>
int main()
{
	int n;
	int max=0, min=99999;
	while(scanf("%d", &n)==1)
	{
		if(n>max) max=n;
		if(n<min) min=n;
	}
	printf("%d", max-min);
}
