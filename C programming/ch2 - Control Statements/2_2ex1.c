/* if else */
#include<stdio.h>

int main(void)
{
    int num1,num2,choice;

    printf("Enter 1st Number :");
    scanf("%d",&num1);
    printf("Enter 2nd Number :");
    scanf("%d",&num2);

    printf("  1.SUM \n  2.PRODUCT \n  Enter Choice : ");
    scanf("%d",&choice);

    if(choice == 1)
        printf("Sum = %d",num1+num2);
    else
        printf("Product = %d",num1*num2);


    return 0;
}
