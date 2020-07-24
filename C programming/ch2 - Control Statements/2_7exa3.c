/* AND , OR , XOR */
#include<stdio.h>
int XOR(int p , int q);//prototype
int main(void)
{
    int p,q;
    printf("Insert value for P (0 or 1) : ");scanf("%d",&p);
    printf("Insert value for Q (0 or 1) : ");scanf("%d",&q);

    printf("P AND Q :\t %d\n",p&&q);
    printf("P OR  Q :\t %d\n",p||q);
    printf("P XOR  Q :\t %d\n",XOR(p,q));//XOR call by function

    return 0;

}

int XOR(int p , int q)
{
    return( (p||q) && !(p&&q) );
}
