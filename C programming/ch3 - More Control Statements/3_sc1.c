#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    printf("enter characters : ");
    do
    {

        ch=getche();
        switch (ch)
        {
        case '\n':
            printf("  Newline ");
            break;
        case '\t':
            printf("  Tab ");
            break;
        case '\b':
            printf("  Backspace ");
            break;

        }
        //printf("\n");

    }while(ch!='q');
    return 0;
}
