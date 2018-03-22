#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int m,n,i,j,z,e;
    char a[100],b[100];
    z=0;
    printf("Enter the string");
    scanf("%s",&a);
    printf("Enter the another string");
    scanf("%s",&b);
    m=strlen(a);
    n=strlen(b);
    if(m>n)
        e=m;
    else
        e=n;
    for(i=0;i<e;i++)
    {
        if(a[i]!=b[i])
        {
            ++z;
        }
    }
    if(z==1)
        printf("true");
    else
        printf("false");
        return 0;
}
