#include<stdio.h>
int main()
{
    int *p,q;

    p=&q;

    q=1;
    printf("value:%d addr:%p\n",*p,p);
    //*p++;//ERROR
    (*p)++;
    printf("value:%d addr:%p\n",*p,p);

}
