#include<stdio.h>
int main()
{
    int arr[10],i,j;
    printf("Enter 10 numbers \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    // checking march
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("match %d \n",arr[i]);
            }
        }
    }

    return 0;
}
