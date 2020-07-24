#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char command[80],temp[80];
    int i,j;
    for( ; ; )
    {
        printf("Operation ?\n");
        gets(command);
/*see if user want to stopr*/
        if(!strcmp(command,"quit"))
            break;

        printf("Enter first number :");
        gets(temp);
        i=atoi(temp);
        printf("Enter second number :");
        gets(temp);
        j=atoi(temp);
/*now, perform the operation */
        if(!strcmp(command,"add"))
            printf("%d + %d = %d \n",i,j,i+j);
        else if(!strcmp(command,"subtract"))
            printf("%d - %d = %d \n",i,j,i-j);
        else if(!strcmp(command,"divide"))
        {
            if(j)
                printf("%d / %d = %d \n",i,j,i/j);
        }

        else if(!strcmp(command,"multiply"))
            printf("%d * %d = %d\n",i,j,i*j);
        else
            printf("Unknown command. \n ");

    }

    return 0;
}
