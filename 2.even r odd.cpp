#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  if(n > -1)
  {
    if( n % 2 )
    {
      cout << "Odd";
    }
    else
    {
      cout << "Even";
    }
  }
  else
  {
    cout << "invalid";
  }
  return 0;  
}
