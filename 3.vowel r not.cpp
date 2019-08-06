/*
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
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string vowel = "aeiou";
    int flag = 0;
    char input;
    
    cin >> input;
    if ((input >= 65 && input <= 90) || (input >= 97 && input <= 122))
    {
        if(input >= 65 && input <= 90)
        {
            input += 32;
        }
        for(int ind = 0; vowel[ind] != '\0'; ind++)
        {
            if(vowel[ind] == input)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout << "Vowel";
        }
        else{
            cout << "Consonant";
        }
    }
    else{
        cout << "invalid";
    }
    return 0;
}
