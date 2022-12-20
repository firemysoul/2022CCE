///2層迴圈,九九乘法表
#include <stdio.h>
int main()
{
    for(int a=1;a<10;a++){
        for(int b=1;b<10;b++){
            printf("%d*%d=%2d  ",a,b,a*b);
        }

        printf("\n");
    }
}
