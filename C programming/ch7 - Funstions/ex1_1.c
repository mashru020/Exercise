#include<stdio.h>

double volume(double s1, double s2 , double s3);

int main()
{
    double vol = volume(12.3, 5.22 , 2.11);
    
    printf("vol = %f \n",vol );
    
    return 0;
}

double volume(double s1 , double s2 , double s3 )
{
    return s1*s2*s3;
}
