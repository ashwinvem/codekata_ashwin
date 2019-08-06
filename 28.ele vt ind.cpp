#include <iostream>
using namespace std;

int main()
{
    int Count, *eleArray;
    
    cin >> Count;
    
    eleArray = new int[Count];
    
    for(int ind = 0; ind < Count; ind++)
    {
        cin >> eleArray[ind];
    }
    
    for(int ind = 0; ind < Count-1; ind++)
    {
        cout << eleArray[ind] << " " << ind << endl;
    }
    
    cout << eleArray[Count-1] << " " << Count-1;
    
    return 0;
    
}
