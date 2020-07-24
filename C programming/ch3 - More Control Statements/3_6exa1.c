#include<stdio.h>
int main(void)
{
    int a,i,j,flag;/*'c'answer,'i' loop count variable,'j' chance loop,'flag' for test condition*/
    for(i=1;i<11;i++)
    {
        printf("%d + %d = ",i,i);
        scanf("%d",&a);
        flag=0;
        if(a==i+i)
        {

            printf("Right! \n");
        }
        else
        {
            /*nested for*/
            for(j=1;j<=3;j++)
            {
                if(flag==0)
                {
                    printf("try again :");
                    scanf("%d",&a);
                    if(a==i+i)
                    {
                        flag=1;
                        printf("Right !\n");
                    }
                }

            }
            if(flag==0)
                printf("Right ans is %d\n",i+i);
        }


    }
    return 0;
}
