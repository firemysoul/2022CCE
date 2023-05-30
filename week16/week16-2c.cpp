#include <stdio.h>
int main()
{
	int n;
	int ans=-999;
	while(scanf("%d", &n)==1)
	{
		ans+=n;
		printf("Enter an integer ( 999 to end ): \n");
	}
	printf("The total is: %d", ans);
}
