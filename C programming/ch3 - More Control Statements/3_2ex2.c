/* program to compute the circle or triangle or rectangle */
#include<stdio.h>
#define pi 3.14
int main(void)
{
    int choice;/*for choose an option*/
    printf("Which you want to compute ?\n");
    printf("\t1.Circle \n\t2.Triangle \n\t3.Rectangle \n\tChoose your option :");
    scanf("%d",&choice);

    if(choice==1)
    {
        float r;/*'r' Radios of a circle */
        printf("Enter value for Circle \n");
        printf("\tRadios : ");
        scanf("%f",&r);
        printf("\nArea of the Circle is : %f",pi*r*r);
    }

    else if(choice==2)
    {
        float b,h;/*'b' is base & 'h' is hight of a triangle */
        printf("Enter value for Triangle \n");
        printf("\tBase  : ");
        scanf("%f",&b);
        printf("\n\tHight : ");
        scanf("%f",&h);
        printf("\nArea of the Triangle is : %f",.5*b*h);

    }
    else
    {
        float l,w;/*'l' length & 'w' width of a rectangle */
        printf("Enter value for Rectangle \n");
        printf("\tLength : ");
        scanf("%f",&l);
        printf("\n\tWidth  : ");
        scanf("%f",&w);
        printf("\nArea of the Rectangle is : %f", l*w);


    }

    return 0;
}

