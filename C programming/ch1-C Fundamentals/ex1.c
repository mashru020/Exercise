/*Relative weight of MOON */
#include<stdio.h>
void moon_weight(float earth_weight);/*prototype*/

int main(void)
{
    float earth_weight;
    printf("Enter your weight : ");
    scanf("%f",&earth_weight);

    moon_weight(earth_weight);

    return 0;
}
void moon_weight(float earth_weight)/*function*/
{
    printf("Equivalent weight on the moon : %f",earth_weight*0.17);
}
