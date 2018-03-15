#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f,s1,s2;
    clrscr();
    printf("enter the first co-ordinate value(a,b)");
    scanf("%d%d",&a,&b);
    printf("enter the second co-ordinate value(c,d)");
    scanf("%d%d",&c,&d);
     printf("enter the third co-ordinate value(e,f)");
    scanf("%d%d",&e,&f);
    s1=(d-b)/(c-a);
    s2=(f-d)/(e-c);
    if (s1==s2)
    {
        printf("three points fall on the same line");
    }
    else
    {
    printf("three points does not fall on the same line")
    }
}
