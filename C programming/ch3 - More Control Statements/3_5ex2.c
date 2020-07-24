#include<stdio.h>
int main(void)
{
    int choice;
    printf("\t1.Enter addresses \n\t2.Delete address \n\t2.Search the list \n\t4.Print the list \n\t5.Quit \n");
    do
    {
        printf("Enter the number of your choice (1-5) : ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5);
    return 0;
}

