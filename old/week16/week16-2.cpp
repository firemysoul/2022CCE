#include <stdio.h>
#include <string.h>
char line[2000];
char line2[2000];

int main()
{
    printf("�п�J�@��r(�L�Ů�)\n");
    scanf("%s",line);

    int N = strlen(line);
    printf("�r����׬O%d\n",N);

    strcpy(line2, line);
    printf("line :%s\n",line2);

}
