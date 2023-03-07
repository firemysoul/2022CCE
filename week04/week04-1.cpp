#include <stdio.h>
int main()
{
	char line[100];

	while(scanf("%s", line)==1)
	{
		printf("%s -- ", line);

		printf("is not a palindrome.\n\n");
	}
}
