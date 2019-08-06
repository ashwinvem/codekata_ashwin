#include <iostream>
using namespace std;

int main()
{
    int facto, res = 1;
    
    cin >> facto;
    
    while(facto)
    {
        res *= facto;
        facto--;
    }
    cout << res;
    return 0;
}
