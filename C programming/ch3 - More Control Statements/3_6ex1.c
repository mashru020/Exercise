/*program to fine all prime number 2-1000*/
#include<stdio.h>
int main(void)
{
    int i,j,f;
    f=1;
    for(i=2;i<1000;i++)
    {
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
                f=0;
        }
        if(f==1)
            printf("%d ",i);

        f=1;
    }
    return 0;

}

