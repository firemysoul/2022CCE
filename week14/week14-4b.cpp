#include <stdio.h>
int main()
{
	printf("Enter the number of values to be processed: ");
	int n;
	scanf("%d", &n);
	int ans=1;
	int a[99];
	for(int i=0; i<n; i++)
	{
		printf("Enter a value: ");
		scanf("%d", &a[i]);
		ans*=a[i];
	}
	printf("Product of the %d values is %d", n, ans);

}
