#include <iostream>
#include <string>

using namespace std;

int main()
{
  string strA, strB;
  
  cin >> strA >> strB;
  
  strA.append(strB);
  
  cout << strA;
  
  return 0;
}
