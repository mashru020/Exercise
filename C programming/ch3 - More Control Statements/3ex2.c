#include<stdio.h>
#include<conio.h>

int main(void)
{
    int x;
    char a;
    do
    {
        scanf("%d",&x);
        if(x==0)
            printf("Zero \n");
        else if(x<0)
            printf("Negative number\n");
        else
            printf("Positive number\n");
        printf("do you want to end the program (y/n) : ");
        a=getch();
        printf("\n");
    }while(a!='y');

    return 0;
}
