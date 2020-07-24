/*use of getche() function */

#include<stdio.h>
//#include<conio.h>/*for getche() function */ // header file sara o kaj kore
int main(void)
{
    char ch;
    printf("Enter a Character : ");
    ch=getche();
    printf("\nIts ASCII code is %d\n",ch);
    printf("Enter a Character : ");
    ch=getchar();
    printf("\nIts ASCII code is %d",ch);

    return 0;
}
