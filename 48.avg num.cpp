#include <iostream>

using namespace std;

int main()
{
  int noOfElements, sum = 0, avg, ind = 0;;
  
  cin >> noOfElements;
  
  while (ind++ != noOfElements)
  {
    int n;
    cin >> n;
    sum += n;
  }
  
  avg = sum / noOfElements;
  
  cout << avg;
  
  return 0;
}
