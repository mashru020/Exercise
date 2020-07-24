#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    int i;
    gets(str);
    i=strlen(str);
    for(i;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");p;[
    ]
    return 0;
}
