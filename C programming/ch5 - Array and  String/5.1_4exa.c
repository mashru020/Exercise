
#include<stdio.h>
int main()
{
    int item[100];
    int count,a,b,temp;
    printf("how many numbers?\n ");
    scanf("%d",&count);
    printf("Enter the numbers : \n");
    for(a=0;a<count;a++)
    {
        scanf("%d",&item[a]);
    }
    //sort them using bubble sort
    for(a=1;a<count;a++)
    {
        for(b=count-1;b>=a;b--)
        {
            if(item[b-1]>item[b])
            {
                temp=item[b-1];
                item[b-1]=item[b];
                item[b]=temp;
            }
        }
    }
    printf("The list \n");

    //display the list
    for(a=0;a<count;a++)
    {
        printf("%d ",item[a]);
    }
    return 0;
}
