#include <iostream>
using namespace std;

int main(){
    int n,i;
    
    cin>>n;
    bool isprime=true;
    for(i=2;i<=n;++i){
        if(n%2==0){
            isprime=false;
            break;
        }
        }
        if(isprime){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
    
    
