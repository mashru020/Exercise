#include<stdio.h>
int main(void)
{
    int answer,num;
    for( num=17 ; num<101 ; num=num+1)
    {
        if(num%17==0)
           {
               answer=num/17;
               if(answer%2==0)
                    printf("%d  ",num);
           }
    }
    return 0;
}
