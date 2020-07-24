/*count down withe bell*/
#include<stdio.h>
int main(void)
{
    int count;
    printf("Enter a number :");
    scanf("%d",&count);
    for(count ; count>=0 ; count--)
    {
        printf("%d\n",count);
        if(count==0)
            printf("\a");
    }

    return 0;
}

