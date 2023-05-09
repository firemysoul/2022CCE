#include <stdio.h>
int a[13];
int main()
{
	int n=0;
	for(int i=0; i<12; i++)
	{
		scanf("%d", &a[i]);
		if(a[i]!=0) n++;
	}
	int ans=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]==a[n]) ans++;
	}
	printf("%d\n", ans);
}
