#include<stdio.h>
#include<conio.h>

int main(void)
{
    int a,b;
    char ch;
    printf("What do you want to : \n");
    printf("Add, Subtract, Multiply or Divide?\n");

    printf("Enter first letter :");
    ch=getche();
    printf("\n");

    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);

    if(ch=='A')printf("%d", a+b);
    if(ch=='S')printf("%d", a-b);
    if(ch=='M')printf("%d", a*b);
    if(ch=='D' && b!=0)printf("%d", a*b);

    return 0;
}
