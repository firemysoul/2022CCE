#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans=0;
	for(int i=0; i<4; i++)
	{
		if(n!=0)ans=ans*10+n%10;
		n/=10;
	}
	printf("%d\n", ans);
}
