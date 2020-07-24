#include<stdio.h>
int main(void)
{
    int i ;
    for(i=1 ; i<=1000; )
    {
        printf("%d ",i);
        i=i+i;
    }
    return 0;
}
