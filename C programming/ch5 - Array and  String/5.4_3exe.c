#include<stdio.h>
int main()
{
    int arr[][3]=
    {
       1, 1, 1,
       2, 4, 8,
       3, 9, 27,
       4, 16, 64,
       5, 25, 125,
       6, 36, 216,
       7, 49, 343,
       8, 64, 512,
       9, 81, 792,
       10, 100, 1000
    };
    int num,i;
    printf("Enter the cube : ");
    scanf("%d", &num);

    for(i=0;i<10;i++)
    {
        if(num==arr[i][2])
        {
            printf("Root   :%d\n",arr[i][0]);
            printf("Square :%d\n",arr[i][1]);
        }
    }
    if(i==10)
    {
        printf("The number is not listed. \n");
    }

    return 0;
}
