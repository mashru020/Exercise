#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[80], *p;
    int i;

    printf("Enter a string : ");
    gets(str);

    /*for(i=0 ; str[i] ; i++)
    {
        str[i]=toupper(str[i]);

    }*/
    p=str;
    while(*p)
    {
        *p=toupper(*p);
        p++;
    }

       //printf("%c",str[i]);
        printf("%s\n",str);

    /*for(i=0 ; str[i] ; i++)
    {
        str[i]=tolower(str[i]);
    }*/
    p=str;l
    while(*p)
    {
        *p=tolower(*p);
        p++;
    }
        printf("%s\n",str);

}
