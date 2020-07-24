#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i;
    char ch;
    for(i=0;i<10;i++)
    {
        printf("Enter a character : ");
        ch=getche();
        printf("\n");
        /*for( ; ch ;ch--)//for loop
        {
            printf("%c", '.');
        }
        */
        /*while(ch)//while loop
        {
            printf("%c", '.');
            ch--;
        }*/
        do //do loop
        {
            printf("%c", '.');
            ch--;
        }while(ch);

        printf("\n");
    }
}
