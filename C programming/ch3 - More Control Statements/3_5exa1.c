#include<stdio.h>
#include<conio.h>

int main(void)
{
    char ch;
    float num1,num2;

    printf("What do you want?\n");
    printf("\tAdd \n\tSubtract \n\tMultiply \n\tDivide\n");

    /*force user to Enter a valid response */
    do
    {
        printf("Enter the first letter : ");
        ch=getche();
        printf("\n");
    }while(ch!='A' && ch!='S' && ch!='M' && ch!='D');
    printf("\n");

    printf("Enter first number : ");
    scanf("%f",&num1);

    printf("Enter second number : ");
    scanf("%f",&num2);

    if(ch=='A')printf("Answer : %f\n",num1+num2);
    if(ch=='S')printf("Answer : %f\n",num1-num2);
    if(ch=='M')printf("Answer : %f\n",num1*num2);
    if(ch=='D' && num2!=0)printf("Answer : %f\n",num1/num2);

    return 0;

}
