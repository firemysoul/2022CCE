#include <stdio.h>
int z=10;
void func()
{
    int y;
    printf("剛進來func()時,z是%d\n",z);
    z=2;
    printf("在func()裡把z改成%d\n",z);
}
int main()
{
    int x;
    func();

    printf("剛進來main()時,z是%d\n",z);
    z=1;
    printf("在main()裡把z改成%d\n",z);
}
