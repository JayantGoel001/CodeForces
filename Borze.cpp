#include<iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.length();
    for (int i = 0; i < n; ++i) {
        if (str[i]=='-'){
            i++;
            if (str[i]=='-'){
                cout<<"2";
            } else{
                cout<<"1";
            }
        }else{
            cout<<"0";
        }
    }
}