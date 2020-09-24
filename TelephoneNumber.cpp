#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        if (n==11){
            if (str[0]=='8'){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else if(n<11){
            cout<<"NO\n";
        }else{
            n = n-11;
            int index = str.find('8');
            if (index<n){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}