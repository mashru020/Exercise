#include<stdio.h>
#include<string.h>
int main()
{
    char *p[]=
    {
        "yes", "no", "maybe",
    };
    char str[80];
    int index;
    printf("Enter your  question : ");
    gets(str);

    index=strlen(str)%3;
    printf("%s \n",p[index]);

    return 0;
}
