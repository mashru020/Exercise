#include<stdio.h>
int main(void)
{
    int i,j,total;
    total=0;
    do
    {
        printf("Enter Next number (0 to stop) : ");
        scanf("%d",&i);
        printf("Enter the number again : ");
        scanf("%d",&j);
        if(i!=j)
        {
            printf("Mismatch!\n");
            continue;
        }
        total=total+i;
    }while(i);

    printf("Total : %d",total);

    return 0;
}
