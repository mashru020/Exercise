/*return function without any value & before its curly brace */
#include<stdio.h>
void func(void);
int main(void)
{
    func();

    return 0;
}

void func(void)
{
    printf("This is printed. \n");
    return; /*return with no value */
    printf("This is never printed...");
}

