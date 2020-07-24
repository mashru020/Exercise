/* check number whether positive or negative */
#include<stdio.h>
int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num < 0)
        printf("Number is negative. \n");
    else
        printf("Number is positive. \n");

    return 0;
}
