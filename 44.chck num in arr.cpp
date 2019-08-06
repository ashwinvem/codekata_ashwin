#include <iostream>
#define START 1
#define END 10

using namespace std;

int main()
{
  int num;
  
  cin >> num;
  
  (num >= START && num <= END) ? cout << "yes" : cout << "no";
  
  return 0;
}
