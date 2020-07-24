/*this program has 3 functions */
#include<stdio.h>
void func1(void); /*prototype for func1() */
void func2(void); /*prototype for func2() */
int main()
{
    func2();
    printf("3");

    return 0;
}
void func2(void)
{
    func1();
    printf("2 ");
}
void func1(void)
{
    printf("1 ");
}
