/*converter*/
#include<stdio.h>

int main(void)
{
    int choice;
    do
    {
        printf("1.feet to meters\n");
        printf("2.meters to feet\n");
        printf("3.ounces to pounds\n");
        printf("4.pounds to ounces\n");
        printf("5.quit\n");
        printf("Choose your option : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                float f;
                printf("feet : ");
                scanf("%f",&f);
                printf("Equivalent meters : %f\n\n",f/3.281);
                break;
            }
        case 2:
            {
            float m;
            printf("meters : ");
            scanf("%f",&m);
            printf("Equivalent feet : %f\n\n",m*3.281);
            break;
            }
        case 3:
            {
                float o;
            printf("ounces : ");
            scanf("%f",&o);
            printf("Equivalent pounds : %f\n\n",o/16.0);
            break;
            }
        case 4:
            {float p;
            printf("pounds : ");
            scanf("%f",&p);
            printf("Equivalent ounces : %f\n\n",p*16.0);
            break;
            }
        }
    }while(choice!=5);


    return 0;
}
