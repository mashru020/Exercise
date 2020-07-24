#include<stdio.h>
#include<conio.h>
int main(void)
{
    char a,b;
    printf("a-z : ");
    for(a='a';a<'z'; a++)
    {
        printf("%d, ",a);
    }
    printf("\nA-Z : ");
    for(a='A';a<'Z';a++)
    {
        printf("%d, ",a);
    }
    return 0;
}
