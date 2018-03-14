#include <iostream.h>
using namespace std;
int getSingle(int arr[], int n)
{
    int ones = 0, twos = 0 ;
  int common_bit_mask;
    for( int i=0; i< n; i++ )
    {
        twos  = twos | (ones & arr[i]);
        ones  = ones ^ arr[i];
        common_bit_mask = ~(ones & twos);
        ones &= common_bit_mask;
        twos &= common_bit_mask;
    }
 return ones;
}
 int main()
{
    int arr[] = {4, 4, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"single element occur in the list is %d "<<
            getSingle(arr, n)<<endl;
    return 0;
}
