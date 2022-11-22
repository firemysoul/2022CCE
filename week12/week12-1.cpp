///Selection Sort
#include <stdio.h>
int a[10]={1 ,2 ,3 ,10 ,9 ,8 ,7 ,6 ,5 ,4};
int main()
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
}
