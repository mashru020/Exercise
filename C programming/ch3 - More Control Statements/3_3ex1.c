#include<stdio.h>
int main(void)
{
    float dist,speed;
    int num;
    printf("Enter the number of Drive time : ");
    scanf("%d",&num);

    for(num;num>0;num--)
    {
        printf("Enter Distance : ");
        scanf("%f",&dist);

        printf("Enter Average speed : ");
        scanf("%f",&speed);

        printf("Driving time : %f\n",dist/speed);
    }
    return 0;
}
