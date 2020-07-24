/*This program converts Earth days to Jovian years.*/
#include<stdio.h>
int main(void)
{
    int e_days; /*Earth days*/
    float e_years; /*Earth years*/
    float j_years; /*Jovian years*/

    /*get the number of earth days */
    printf("Enter the number of Earth days :");
    scanf("%d",&e_days);

    /*Earth year*/
    e_years = e_days/365.0;

    /*convert Earth days to Jovian days*/
    j_years = e_days/(365.0*12.0);

    /*display the answer */
    printf("Earth years : %f\n",e_years);
    printf("Equivalent Jovian years: %f",j_years);

    return 0;
}
