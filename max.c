#include <stdio.h>
void main()
{
   int i,max,a[100];
   printf("enter the ten numbers");
   for(i=0;i<3;i++)
   {
   scanf("%d",&a[i]);
       }
   max=a[0];
   for(i=1;i<3;i++)
   {       
           if(max<=a[i])
           max=a[i];
           else if(max>a[i])
           max=max;
           }
      printf("\n the max value is:%d",max);
    }
