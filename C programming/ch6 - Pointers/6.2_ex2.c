#include<stdio.h>
int main()
{
    char str[]="pointers are fun";
    char *p;
    int i;

    p=str;
    for(i=0;p[i]/*str[i]*/;i++)
    {
       /* printf("%c",str[i] );*/
        printf("%c",str[i] );
    }
}

