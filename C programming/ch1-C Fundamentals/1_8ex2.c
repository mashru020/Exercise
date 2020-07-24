/*dollars to pounds converter */
#include<stdio.h>

float convert(float);/* prototype */
int main()
{
    float dollar , pound ;
    printf("Enter the amount of Pound : ");
    scanf("%f",&pound);
    dollar=convert(pound);
    printf(" Dollar : %f",dollar);
    return 0;
}
float convert(float pound)/* pound to dollar convert */
{
    return pound*2;
}
