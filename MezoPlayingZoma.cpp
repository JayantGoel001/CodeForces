#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int l = 0;
    int r = 0;
    for (int i = 0; i < n; ++i) {
        if(str[i] == 'L'){
            l--;
        }else{
            r++;
        }
    }
    cout<<(r-l)+1;
}