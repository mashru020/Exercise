#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    printf("Enter the letter : ");
    ch=getche();
    printf(" ");
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("is a vowel.\n ");
    break;
    default :
        printf("is a consonant.\n");

    }
    return 0;
}
