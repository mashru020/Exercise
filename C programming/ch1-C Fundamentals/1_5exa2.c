#include<stdio.h>
int main()
{
    int num,count,val ;
    printf("Enter value for num :");
    scanf("%d",&num);
    printf("\nEnter value for val :");
    scanf("%d",&val);

    printf("\n(Count = Num + Val )\n");
    printf("Count = %d\n",val+num);

    printf("(count * num + 88 / val - 19 mod count): %d",count * num + 88 / val - 19 % count);
    printf("(count * num) + (88 / val) - (19 mod count): %d",(count * num) + (88 / val) - (19 % count));
    return 0;

}
