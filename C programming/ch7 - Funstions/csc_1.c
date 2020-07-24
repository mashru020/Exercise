#include<stdio.h>
#include<string.h>
void passcheck(char *str1, char *str2);
int main()
{
    char pass[80],checkpass[80];
    pass={"password1234"};
    printf("enter your password :")
    gets(checkpass);
    passcheck(&pass,&checkpass);
}

void passcheck(char *str1, char str2)
{
    strcmp
}
