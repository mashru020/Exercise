#include<stdio.h>
#include<string.h>
    char *p[][2]=
    {
        "Red Delicious", "red",
        "Golden Delicious", "yellow",
        "Winesap", "red",
        "Gala","reddish orange",
        "Lodi", "green",
        "Mutsu", "yellow",
        "Cortland", "red",
        "Jonathan", "red"
    };
int main()
{
   int i;
   char apple[80];
   printf("Enter name of apple : ");
   gets(apple);

   for(i=0 ; *p[i][0]; i++)
   {
       if(!strcasecmp(apple,p[i][0]))
       {
           printf("%s : %s \n",apple,p[i][1]);
       }
   }
}
