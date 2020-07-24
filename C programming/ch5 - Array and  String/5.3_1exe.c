#include<stdio.h>
int main()
{
    int arr[3][3][3],i,j,k,l;
    l=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                l++;
                arr[i][j][k]=l;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d ",arr[i][j][k]);
            }
        }
    }

    return 0;
}
