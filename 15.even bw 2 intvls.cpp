#include <iostream>
using namespace std;

int main(){
    int num,min,max;
    cout<<"max pls";
    cin>>max;
    cout<<"min pls";
    cin>>min;
    for(num=min+1;num<max;num++){
        if(num%2 == 0)
            cout<<num<<' ';
    }
    return 0;
}
