/*
program continuous to loop until a 'q' entered */
#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i;
    char ch;

    for(i=0; ch!='q' ; i++)/*loop stop condition */
    {
        printf("Pass : %d \n",i);
        ch=getche();printf("\n");
    }

    return 0;
}
