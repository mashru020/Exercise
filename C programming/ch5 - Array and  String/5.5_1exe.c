#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][40];
    int i;
    /*take 10 string*/
    for(i=0;i<10;i++)
    {
        printf("%d :",i+1);
        gets(str[i]);
    }
    do
    {
        printf("Enter the number of string : ");
        scanf("%d",&i);
        i--;
        if(i<10&&i>=0)
        {
            printf("%s\n",str[i]);
        }
        else
            printf("not listed.\n");
    }while(i>=0);


    return 0;
}
