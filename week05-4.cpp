///了解for迴圈的各種變形
#include <stdio.h>
int main()
{
    for (int a=0;a<3;a++){
        printf("迴圈(電腦習慣) a是%d\n",a);
    }
    for (int a=0;a<=3;a++){
        printf("迴圈(人類熟悉) a是%d\n",a);
    }
    for (int a=3;a>0;a--){
        printf("到過來的迴圈 a是%d\n",a);
    }
}
