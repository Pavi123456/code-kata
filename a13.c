#include<stdio.h>
int main()
{
int n,i,c=0;
scanf("%d",&n);
for(i=2;i<n;i++)
c=0;
{
    if(i%2==0)
    {
    c++;
    }
}
if(c==1)
printf("no");
else
printf("yes");
return 0;
}
