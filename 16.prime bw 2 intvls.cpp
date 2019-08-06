#include <iostream>
using namespace std;

int main(){
    int num,min,max;

    cout<<"enter max";
    cin>>max;
    cout<<"min pls";
    cin>>min;
    for(num=min+1;num<max;++num){
        bool isPrime = true;
        for(int i = 2; i <= num / 2; ++i)
        {
         if(num % i == 0)
         {
          isPrime = false;
          break;
         }
        }
        if (isPrime)
         cout << num << " ";
    }
    
}
