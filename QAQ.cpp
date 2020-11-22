#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int q=0;
    int a=0;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i]=='Q'){
            q++;
        }
        if (str[i]=='A'){
            a++;
        }
    }
    cout<<(q-1)*a;
}