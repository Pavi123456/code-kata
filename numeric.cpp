#include <iostream>
using namespace std;
int main()
{
 char s[10],i,b=0;
 cout<<"enter the string";
 cin>>s[10];
 for(i=0;s[i]!='\0';i++)
 {
    if((s[i]>='0' || s[i]<='9'))
    {
        b=b+1;
    }}
     if(b==0)
    {
        cout<<"no";
    }
    else
        cout<<"yes";
    return 0;
}
