#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    int j=0;
    for (int i = 0; i < t.length(); ++i) {
        if (s[j]==t[i]){
            j++;
        }
    }
    cout<<j+1;
}