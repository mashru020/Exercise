#include<stdio.h>
#include<math.h>
int main()
{
    double i;
    for(i=1;i<=100;i++)
    {
        printf("the square root of %f is %lf\n",i,sqrt(i));
        printf("Whole number part %d \n",(int)sqrt(i));
        printf("fraction part %lf \n",sqrt(i)-(int)sqrt(i));
    }
    return 0;
}
