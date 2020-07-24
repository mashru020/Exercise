#include<stdio.h>
#include<string.h>
char words[][2][40]=
{
    "dog", "Hund",
    "no", "nein",
    "year", "jahr",
    "child", "kind",
    "I", "Ich",
    "driver", "fahren",
    "house", "Haus",
    "to", "zu",
    " ", " "
};
int main()
{
    char english[80];
    int i;
    printf("Enter English word : ");
    gets(english);
    i=0;
    /*look up the word*/

    while(strcmp(words[i][0]," "))
    {
        if(!strcmp(english,words[i][0]))
        {
            printf(words[i][1]);
            break;
        }
        i++;
    }
    if(!strcmp(words[i][0]," "))
    {
        printf("The word not in dictionary.\n");
    }

    return 0;
}
