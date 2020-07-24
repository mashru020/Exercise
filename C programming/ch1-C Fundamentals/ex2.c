/* program for ounce to cup convert */
#include<stdio.h>
float o_to_c(float ounce);/*prototype*/

int main()
{
    float ounce;
    float cup;
    printf("Enter amount in ounce : ");
    scanf("%f",&ounce);
    cup=o_to_c(ounce);
    printf("CUP : %f\n",cup);

    return 0;
}

float o_to_c(float ounce)/* convert ounce to cup */
{
    return(ounce/8.0);/*return cup*/
}
