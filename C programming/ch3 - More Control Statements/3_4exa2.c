/*Encode program */
#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    printf("Enter your massage.\n");
    ch=getche();
    while(ch!='\r')/*Enter press korle loop end hobe */
    {
        printf("%c",ch+1);
        ch=getche();
    }
    return 0;
}
