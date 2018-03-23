#include<stdio.h>
int main()
{
    int a[10],b[10],n,l,m,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
     for(i=0;i<n;i++)
    {
        if(a[i]==b[n-i-1])
        ++count;
    }
    if(count==n)
    printf("true");
    else
    printf("false");
    return 0;
}
