#include<stdio.h>
int main(void)
{
    int num;
    printf("x \t x.x \t x.x.x\n");
    for(num=1 ; num<11 ; num++)
    {

        printf("%d \t %d \t %d\n",num,num*num,num*num*num);
    }
    return 0;
}
