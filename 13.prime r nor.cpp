/*
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
    */
#include <iostream>
using namespace std;

int main()
{
    int n, flag = 1;
    cin >> num;
    
    for(int divisor = 2; divisor <= n/2; divisor++)
    {
        if(n%divisor == 0)
        {
            flag = 0;
            break;
        }
    }
    
    if(flag)
        cout << "yes";
    else
        cout << "no";
    
    return 0;
}
    
    

