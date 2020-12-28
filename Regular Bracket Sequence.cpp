#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        string str;
        cin>>str;
        if (str.length()%2==0 && str[0]!=')' && str.back()!='('){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}