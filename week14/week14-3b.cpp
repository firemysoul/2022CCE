#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n <= 1500)printf("100");
	if(n > 1500)
	{
		if(n%250==0)printf("%d", 100+(n-1500)/250*5);
		else printf("%d", 100+(n-1500)/250*5+5);
	}
}
