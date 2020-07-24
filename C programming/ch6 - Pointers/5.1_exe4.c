#include<stdio.h>

int main()
{
    int *p;
    int i;
    for(i=0; i<10 ; i++)
    {
        p=&i;

        printf("%d ",*p);
    }
    return 0;
}
