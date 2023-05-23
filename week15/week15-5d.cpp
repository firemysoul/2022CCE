#include <stdio.h>
int main()
{
	int min=999;
	int max=-999;
	int n;
	while(scanf("%d", &n)==1)
	{
		if(n>max) max=n;
		if(n<min) min=n;
	}
	printf("[%d,%d]", min, max);
}
