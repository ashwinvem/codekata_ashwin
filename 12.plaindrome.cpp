#include <iostream>
using namespace std;
 
int main(){
    int num,digit,rev=0,n;
    
    cin>>num;
    n=num;
    do{
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
    }while(num!=0);
    
     if (n == rev)
         cout << " yes";
     else
         cout << "no";
    return 0;
}
