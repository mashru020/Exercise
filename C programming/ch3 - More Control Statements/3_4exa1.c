#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    ch=getche();
    while(ch!='q')
    {
        ch=getche();
    }

    printf("\nFound the q.");
    return 0;

}
