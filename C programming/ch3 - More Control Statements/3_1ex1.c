#include<stdio.h>
#include<conio.h>

int main(void)
{
   int i;
   char ch,smallest ;
   smallest='z';
   printf("Enter 10 letters. \n");
   for(i=0;i<10;i++)
   {
      ch=getche();
      printf("\n");
      if(ch<smallest)smallest=ch;
   }
   printf("\nThe smallest character is : %c\n",smallest);

   return 0;
}
