#include<stdio.h>
int main()
{
    double *p, temp;
    int q;
    temp=1234.34;
    p=&temp;
    q=*p;

    printf("%d \n",q);
}
