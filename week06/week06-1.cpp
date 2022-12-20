///畫星星
#include <stdio.h>
int main()
{
    for(int a=5;a>0;a--){
        for(int b=0;b<a;b++){
            printf("*");
        }
        printf("i:%d星星\n",a);
    }
}
