#include <iostream>
using namespace std;

float n1,n2,n3;
int main(){
    
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3)
    cout<<n1;
    if(n2>=n1 && n2>=n3)
    cout<<n2;
    if(n3>=n2 && n3>=n1)
    cout<<n3;
    
    return 0;
    
}
