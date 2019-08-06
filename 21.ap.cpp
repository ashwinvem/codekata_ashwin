#include <iostream>
using namespace std;

int main()
{
    int startSeq, diff, Position;
    int endingVal, res;

    cin >> Position >> startSeq >> diff;
    
    endingVal = startSeq + ((Position-1)*diff) ;
    
    res = Position*(startSeq + endingVal);
    
    res /= 2;
    
    cout << res;
    
    return 0;
    
}
