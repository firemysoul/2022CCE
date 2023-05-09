#include <stdio.h>
int main()
{
	char s[5];
	scanf("%4s", s);
	int ans=0, n=8;
	for(int i=0; i<4; i++)
	{
		ans+=(s[i]-'0')*n;
		n/=2;
	}
	printf("%d\n", ans);
}
