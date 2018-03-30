#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&l);
  int a[a],i,j=0;
  for(i=0;i<a;i++)
  scanf("%d",&a[i]);
    for(i=0;i<a;i++)
    {
      if(a[j]==a[i+1])
         {
           printf("\n%d",a[j]);
           for(j=i+1;j<a;j++)
           {
           a[j]=a[j+1];
           a[l]='\0';
           a--;
                  }
         j++;
         }
         }
	return 0;
}
