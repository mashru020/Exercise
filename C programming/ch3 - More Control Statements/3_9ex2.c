#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    int letter,number,punctuation;
    letter=0;
    number=0;
    punctuation=0;
    printf("Enter letter/number/punctuation(press Enter to end) : ");
    do
    {
        ch=getche();
        switch(ch)
        {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            number++;
            break;
        case '.':
        case '?':
        case '!':
        case '-':
        case ',':
            punctuation++;
            break;
        default:
            letter++;
            break;
        }
    }while(ch != '\r');
    printf("\n");
    printf("Number      : %d\n",number);
    printf("Letter      : %d\n",letter);
    printf("Punctuation : %d\n",punctuation);

    return 0;
}
