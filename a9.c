#include<stdio.h>
int main()
{
   int a[100],n,i,sum=0,n1;
   scanf("%d",&n);
   scanf("%d",&n1);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n1;i++)
   {
   sum=sum+a[i];
   }
   printf("%d",sum);
   
    return 0;
}
