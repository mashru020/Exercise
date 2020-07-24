#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    printf("Enter lowercase letter (a-z)(Press Enter to end ): \n");
    do
    {

         ch=getche();

         printf("%c ",ch-32);


    }while(ch!='\r');
   return 0;
}
