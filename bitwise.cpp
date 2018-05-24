#include <iostream>
using namespace std;
int swap(int*X,int*Y)
{
    int temp;
    temp=*X;
    *X=*Y;
    *Y=temp;
}
    int main()
   {
       int a,b;
       cin>>a>>b;
       swap(&a,&b);
       cout<<a<<" "<<b;
  return 0;
}
