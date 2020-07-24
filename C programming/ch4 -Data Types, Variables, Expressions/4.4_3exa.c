#include<stdio.h>
void func(void);
int main( )
{
    func();
    func();
    func();

    return 0;
}
void func(void)
{
    int i=10;
    printf("%d\n",i);
}
