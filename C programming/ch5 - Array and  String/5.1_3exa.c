
#include<stdio.h>
#include<conio.h>
int main()
{
    char mass[80];
    int i;
    printf("Enter your massage (less than 80 characters )\n");
    for(i=0;i<80;i++)
    {
        mass[i]=getche();
        if(mass[i]=='\r')
            break;
    }
    printf("\n\n");
    for(i=0;mass[i]!='\r';i++)
    {
        printf("%c",mass[i]+1);
    }

    return 0;
}
