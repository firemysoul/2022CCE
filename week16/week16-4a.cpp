#include <stdio.h>
#include <string.h>
int main()
{
	char s[999];
	scanf("%s", s);
	int n=strlen(s);
	int x=0;
	for(int i=0; i<n; i++)
	{
		if(s[i]!=s[n-1-i]) x=1;
	}
	if(x==0) printf("YES");
	else printf("NO");
}
