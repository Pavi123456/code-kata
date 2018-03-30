#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
string  lists[5] = { "aaa", "z", "cccc", "tt", "jjj"};
    string s;
    s= lists[0];
    for (int i = 0; i < 5; i++){
        cout << s << endl;
        if (lists[i] < s){   
            s = lists[i];
        }
    }
    cout << "Smallest " << s << endl;
    cout << *min_element(lists, lists + 5) << endl;
return 0;
