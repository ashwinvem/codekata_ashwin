#include <iostream>
using namespace std;

int armstrongCheck(int n)
{
    int temp;
    int digits = 0, sum = 0;
    
    
    temp = n;
    
    while(temp)
    {
        temp /= 10;
        digits++;
    }
    
    temp = n;
    
    while(temp)
    {
        int digit = 1;
        for(int times = 0; times < digits; times++)
        {
            digit *= temp%10;
        }
        sum += digit;
        temp /= 10;
    }
    
    return (sum == n);
}

int main()
{
    int start, end;
    int ele, sp = 0;
    
    cin >> start >> end;
    
    ele = start+1;
    
    while(ele < end)
    {
        if(armstrongCheck(ele))
        {
            if(sp)
            {
                cout << " ";
            }
            cout << ele;
            sp = 1;
        }
        ele++;
    }
    
    return 0;
}
