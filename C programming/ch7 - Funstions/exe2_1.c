#include<stdio.h>
int fact(int value);
int result=1;
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    fact(a);
    printf("the factorial is  %d",result);
    return 0;
}
 int fact(value)
{
    if(value>=1)
    {
        result=result*value;
        fact(value-1);
    }
    return result;
}
