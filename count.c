#include <stdio.h>
int main()
{
   char a[20],count=0,i;
   printf("enter the string");
   scanf("%s",a);
   
   for(i=0;a[i]!='\0';i++)
   {
       count=count+1;
       if(a[i]=="")
       {
           count++;
       }
}  
    printf("ans is%d",count);   
   return 0;
}
