#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    int i,a;/*'a' input number, 'i' loop,*/
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Multiples of %d  \n ",a);
    for(i=1 ; i<1001 ; i++)
    {
        if(i%a==0)
        {
            printf("%d , more?(Y/N)",i);
            ch=getche();
            if(ch=='N')
                break;

            printf("\n");
        }
    }

    return 0;
}
