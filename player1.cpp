#include<iostream>
int main()
{
    int i,j,a,b;
    int arr1[1000];
    int arr2[1000];
   scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        cin>>arr1[i];
    }
    while(b!=0)
    {
        for(i=0;i<a-1;i++)
        {
            arr2[i+1]=arr1i];
        }
        arr2[0]=arr1[a-1];
        b--;
        for(i=0;i<a;i++)
        {
            arr1[i]=arr2[i];
        }
    }
    
    for(i=0;i<a;i++)
    {
       cout<<arr1[i];
    }
    return 0;
}
