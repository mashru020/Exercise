#include<stdio.h>
#include<string.h>
int main()
{
   char str[20],bigstr[80];
   strcpy(bigstr,"");
   for( ; ; )
   {
       printf("Enter New String :");
       gets(str);
       if(!strcmp(str,"quit"))
            break;
       if(strlen(bigstr)+strlen(str)>80)
       {
           break;
       }
       //strcat(bigstr," ");
       strcat(bigstr,str);
       printf("%s \n",bigstr);

   }
    return 0;
}
