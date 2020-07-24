#include<stdio.h>
int main()
{
    char *cp,ch;
    int *ip,i;
    float *fp,f;
    double *dp,d;

    cp=&ch;
    ip=&i;
    fp=&f;
    dp=&d;
    printf("char\t\t int\t\t float\t\t double\t\t \n");
    printf("%p\t %p\t %p\t %p\t \n",cp,ip,fp,dp);

    cp++;
    ip++;
    fp++;
    dp++;
    printf("%p\t %p\t %p\t %p\t \n",cp,ip,fp,dp);
}
