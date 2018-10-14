#include<stdio.h>
int main()
{
   int a,b,i,sum=1;
   scanf("%d%d",&a,&b);
for(i=0;i<b;i++)
{
sum=sum*a;
}
printf("%d",sum);
    return 0;
}
