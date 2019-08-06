#include<iostream>
using namespace std;

char ch;
int main(){
    cout<<"enter the char";
    cin>>ch;
    if(isalpha(ch)){
        if((ch == 'a') || (ch=='e') || (ch=='i'))
        cout<<"vowel";
        else
        cout<<"character";
    }
    else if(isdigit(ch))
    cout<<"enter the char";
    else
    cout<<"is a spc char";
    return 0;
}
