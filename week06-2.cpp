#include <stdio.h>

int main()
{
    for(int a=1;a<=5;a++){
        int speace=5-a, star=2*a-1;
        for(int k=0;k<speace;k++) printf(" ");
        for(int k=0;k<star;k++) printf("*");
        printf("\n");
    }
}

