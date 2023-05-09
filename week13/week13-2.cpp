#include <stdio.h>
char s[5];
int main()
{
	scanf("%4s", s);
	int n=0;
	for(int i=0; i<4; i++)
	{
		if(s[i]!=s[4-i-1])n=1;
	}
	if(n==1) printf("NO\n");
	else printf("YES\n");
}
