/*addition-drill */
#include<stdio.h>

int main()
{
    int count,answer;

    for(int count=1;count<11;count=count+1)
    {
        printf("What is %d + %d : ", count,count );
        scanf("%d",&answer);

        if(answer == count+count)
            printf("Right !\n");
        else
        {
            printf("sorry, You are wrong...\n");
            printf("The answer is %d \n",count+count);
        }
    }
    return 0;
}
