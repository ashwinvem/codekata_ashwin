#include <iostream>
#include <climits>

using namespace std;

int main()
{
  int noOfElements;
  int min = INT_MAX, max = INT_MIN;
  
  cin >> noOfElements;
  
  while(noOfElements-- != 0)
  {
    int n;
    cin >> n;
    if (n > max) max = n;
    if (n < min) min = n;
  }
  
  cout << min << " " << max;
  
  return 0;
}
