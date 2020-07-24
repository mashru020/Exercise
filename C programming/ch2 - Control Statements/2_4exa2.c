/*program to check prime number */
#include<stdio.h>
int main(void)
{
    int num,check=1;

    printf("Enter a Number : ");
    scanf("%d",&num);

    /*prime test*/
    for(int i=2 ; i<num/2 ; i=i+1)
    {
        if(num%i==0)
            check=0;
    }
    if(check==1)
        printf("The number is prime. \n");

    else
        printf("The number is not prime. \n");


    return 0;
}
