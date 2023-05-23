#include <stdio.h>
int main()
{
	int n;
	int ans=0;
	while(scanf("%d", &n)==1)
	{
		if(n==0) break;
		if(n>0)ans+=n;
	}
	printf("%d", ans);
}
