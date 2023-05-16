#include <stdio.h>
int main()
{
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	int ans;
	if(c=='+')ans=a+b;
	if(c=='*')ans=a*b;
	if(c=='-')ans=a-b;
	if(c=='/')ans=a/b;
	printf("%d", ans);
}
