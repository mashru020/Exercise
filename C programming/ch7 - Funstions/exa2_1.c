
#include<stdio.h>
void recurse(int i);
int main ()
{
    recurse(0);
    
    return 0;
}
void recurse(int i)
{
    if(i<10)
        {
            printf("%d ",i);
            recurse(i+1);
            if(i==9)
                printf("\n");
                
            printf("%d ",i);
        }
}
