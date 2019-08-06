#include <iostream>
using namespace std;

int yr;
int main(){
    
    cin>>yr;
    if(yr%4==0 && yr%100!=0){
        cout<<"yes";
    }
    if(yr%400==0)
    cout<<"yes";
    if(yr%100==0 && yr%400==0)
    cout<<"yes";
    else
    cout<<"no";
    
    return 0;
}
