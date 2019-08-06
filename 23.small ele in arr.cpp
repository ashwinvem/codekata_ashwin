#include <iostream>
using namespace std;

int main(){
    int  arr[10],n,min,i;
    cout<<"enter the arr size";
    cin>>n;
    cout<<"arr ele";
    for(i=0;i<n;i++)
    cin>>arr[i];
    min=arr[0];
    for(i=1;i<n;i++){
        if(min>arr[i])
        min=arr[i];
    }
    cout<<min;
}
