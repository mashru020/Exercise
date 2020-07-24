#include<stdio.h>
void prompt(char *msg , char *string);
int main()
{
    char str[80];
    prompt("Enter your text : ", str);
    printf("Your text is : %s",str);

    return 0;
}
void prompt(char *msg, char*string)
{
    printf(msg);
    gets(string);
}
