#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3,n4;
    cout<<"enter";
    cin>>n1>>n2;
    cout<<"enter 2nd";
    cin>>n3>>n4;
    if(n1<n3){
        cout<<n3-n1;
    }else{
        cout<<n1-n3;
    }
    cout<<" ";
    if(n2<n4){
        cout<<n4-n2;
    }else{
        cout<<n2-n4;
    }
}
