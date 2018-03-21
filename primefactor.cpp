#include<iostream>
#include<math.h>
using namespace std;
void quick(int* a[],int l,int u)
{
   int* p,temp,i,j;
   if(l<u)
   {
   p=a[l];
   i=l;
   j=u;
    while(i<j)
   {
      while(a[i] <= p && i<j )
	 i++;
      while(a[j]>p && i<=j )
	   j--;
      if(i<=j)
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;}
  }
  temp=a[j];
  a[j]=a[l];
  a[l]=temp;
  
  for(i=0;i<10;i++)
  cout <<a[i]<<" ";
  quick(a,l,j-1);
  quick(a,j+1,u); 
 
}


    
}
 

int main()
{
    int n = 20,l=0,u=9;
     
    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }
 
   
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
       
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
 

    if (n > 2)
        printf ("%d ", n);
        quick(n,l,u);
   
    return 0;
}
