#include<stdio.h>
int main()
{
    int serverUser[5][2]=
    {
        1, 14,
        2, 28,
        3, 18,
        4, 9,
        5, 16
    };

    int server;
    int i=0;
    printf("Enter the server number : ");
    scanf("%d",&server);

    /*look it up in the table*/
    for(i=0;i<5;i++)
    {
        if(server==serverUser[i][0])
        {
            printf("There are %d users int the server %d \n",serverUser[i][1],server);
            break;
        }
    }
    /*report error if not found*/
    if(i==5)
    {
        printf("Server not listed. \n");
    }



    return 0;
}
