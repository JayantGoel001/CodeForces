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
        string newStr;
        for (int j = 0; j < 2*n-1; j+=2) {
            newStr+=str[j];
        }
        cout<<newStr<<"\n";
    }
}