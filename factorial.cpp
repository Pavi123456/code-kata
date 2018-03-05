#include <iostream>
using namespace std;
int main()
{
    unsigned int n;
    unsigned long long factorial = 1;
 cout << "Enter a the integer value: ";
    cin >> n;
 for(int i=1; i<=n; ++i)
    {
        factorial *= i;
    }
cout << "the factorial value is " << n << factorial;    
    return 0;
}
