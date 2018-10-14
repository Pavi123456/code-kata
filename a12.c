#include<stdio.h>
int main()
{
int a,b,c=0,temp;
scanf("%d",&a);
temp=a;
while(a>0)
{
b=a%10;
c=c*10+b;
a=a/10;
}
a=temp;
if(a==c)
printf("yes");
else
printf("no");

    return 0;
}
