#include<stdio.h>
int main(void)
{
    int i;
    printf("Even number : ");
    for(i=1 ; i<101 ; i++)
    {
        if(i%2==1)
            continue;
        printf("%d ",i);
    }
    return 0;
}
