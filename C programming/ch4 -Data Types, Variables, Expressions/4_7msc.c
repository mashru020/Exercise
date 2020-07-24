
#include<stdio.h>
int num=21;
int series(void);
int main ()
{
    int i;
    for (i=0;i<10;i++)
    {
        printf("%d ",series());
    }



    return 0;
}
int series()
{
    num=num*1468%467;
    return num;
}
