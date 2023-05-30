#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	scanf("%s", s);
	int n=strlen(s);
	for(int i=0; i<n; i++)
	{
		printf("%c", s[i]);
		if((n-i-1)%3==0 && (n-1-i)!=0)printf(",");
	}
}
