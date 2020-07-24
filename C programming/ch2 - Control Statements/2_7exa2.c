/*Relational & Logical operator*/
#include<stdio.h>
int main(void)
{
    int i,j;
    printf("Enter first number : ");
    scanf("%d",&i);

    printf("Enter second number : ");
    scanf("%d",&j);

    /*Relational Operator*/
    printf(" i  < j \t%d\n",i<j);
    printf(" i <= j \t%d\n",i<=j);
    printf(" i  > j \t%d\n",i>j);
    printf(" i >= j \t%d\n",i>=j);
    printf(" i == j \t%d\n",i==j);
    printf(" i != j \t%d\n",i!=j);

    /*Logical Operator*/
    printf(" i && j \t%d\n",i && j);
    printf(" i || j \t%d\n",i || j);
    printf("!i   !j \t%d %d\n",!i,!j);

    return 0;
}
