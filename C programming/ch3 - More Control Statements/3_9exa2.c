
#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;

    do{
    printf("Enter a character(a-e) , q to quite : ");
    ch=getche();
    printf("\n");
    switch(ch)
    {
    case 'a':
        printf("Now is ");
    case 'b':
        printf("the time ");
    case 'c':
        printf("for all good man \n");
        break;
    case 'd':
        printf("The summer ");
    case 'e':
        printf("solider \n ");
    }
}while(ch!='q');
return 0;
}
