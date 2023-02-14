#include <stdio.h>
#include <string.h>
char line[2000];
char line2[2000];

int main()
{
    printf("請輸入一行字(無空格)\n");
    scanf("%s",line);

    int N = strlen(line);
    printf("字串長度是%d\n",N);

    strcpy(line2, line);
    printf("line :%s\n",line2);

}
