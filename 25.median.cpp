#include <iostream>

using namespace std;

int main()
{
  int *arr, num;
  
  cin >> num;
  
  arr = new int[num];
  
  for(int ind = 0; ind < num; ind++)
    cin >> arr[ind];
  
  for(int ind = 0; ind < num-1; ind++)
  {
    for(int ind1 = ind + 1; ind1 < num; ind1++)
    {
      if(arr[ind] > arr[ind1])
      {
        arr[ind] = arr[ind] + arr[ind1];
        arr[ind1] = arr[ind] - arr[ind1];
        arr[ind] = arr[ind] - arr[ind1];
      }
    }
  }
  
  cout << arr[num/2];
  
  return 0;
}
