#include<stdio.h>
#include<string.h>
 int main()
{
   char name[30] = "kamal";
   printf("String before: %s\n",name);
 printf("String after strrev: %s",strrev(name));
   return 0;
}
