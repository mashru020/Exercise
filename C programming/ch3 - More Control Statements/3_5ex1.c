/* gallons to litter conversion  */
#include<stdio.h>
#include<conio.h>

int main(void)
{
    float l,g;/*'l'-litter, 'g'-gallon*/
    char ch;
    do
    {
        printf("Enter amount in Gallons : ");
        scanf("%f",&g);
        printf("Equivalent in litter : %f\n",g*3.7854);

        printf("Do you want to repeat this conversion again ?( Y/N ): ");
        ch=getche();

    }while(ch!='N' && ch!='n');

    return 0;
}
