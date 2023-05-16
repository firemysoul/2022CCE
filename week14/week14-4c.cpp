#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans=n-2;
	if(ans<0)ans=-ans;
	printf("%d", ans);
}
