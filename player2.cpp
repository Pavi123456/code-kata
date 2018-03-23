#include<iostream.h>
void main()
{
 int n,i,j,num,min;
 int c[100];
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>c[i];
 }
 for(i=0;i<n;i++)
 {
  int count=0;
  for(i=0;i<n;i++)
  {
   if(c[i]==c[j])
   {
    count=count+1;
   }
  }
  if(count==0)
  {
   cout<<c[i];
  }
 }
} 
