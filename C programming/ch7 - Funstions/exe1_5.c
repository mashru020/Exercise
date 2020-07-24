
#include<stdio.h>
int *init(int x);
int count;
int main(void)
{
    int *p;
    p=init(110);
    printf(" count (through pointer) is %d", *p);
    printf(" count (through pointer) is %d", p);
    return 0;
}

int *init(int x)
{
    count=x;
    return &count;
}
