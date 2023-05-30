#include <stdio.h>
#include <string.h>
int main()
{
	char s1[999], s2[999];
	scanf("%s %s", s1, s2);
	int n1=strlen(s1), n2=strlen(s2);
	if(s1==s2) printf("0");
	if(n1==n2)
	{
		if(s1[0]>s2[0])printf("1");
		if(s1[0]<s2[0])printf("-1");
	}
	if(n1>n2) printf("1");
	if(n1<n2) printf("-1");
}
