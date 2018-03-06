#include <stdio.h>
#include <conio.h>
int main()
{
   int a,i,j,count=0;
   scanf("%d",&a);
   int arr[a];
   for(i=0;i<a;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<a;i++)
  {
     count=1;
     for(j=i+1;j<=a-1;j++)
    {
        if(arr[i]==arr[j] && arr[i]!='\0')
       {
           count++;
           arr[j]='\0';
       }
    }
    if(arr[i]!='\0')
    printf("%d occurs %d\n",arr[i],count);
  }
return 0;
}
