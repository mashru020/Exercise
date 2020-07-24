
#include<stdio.h>
int main()
{
    int arr[31],i,max,min,avg;
    int days;
    printf("How many days in this month ?\n ");
    scanf("%d",&days);

    for(i=0;i<days;i++)
    {
        printf("Enter noonday temperature for day %d :",i+1);
        scanf("%d", &arr[i]);
    }
    //find maximum
    max=arr[0];
    for(i=1;i<days;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    //find minimum
    min=arr[0];
    for(i=1;i<days;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    //find average
    avg=0;
    for(i=0;i<days;i++)
    {
        avg=avg+arr[i];
    }
    avg=avg/days;

    printf("\n\n Maximum noonday temperature : %d\n",max);
    printf("Minimum noonday temperature : %d\n",min);
    printf("Average noonday temperature : %d\n",avg);

    return 0;
}
