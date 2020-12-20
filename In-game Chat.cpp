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
        int count = 0;
        for (int j = n-1; j >=0 ; j--) {
            if (str[j]==')'){
                count++;
            } else{
                break;
            }
        }
        if (count>(n-count)){
            cout<<"Yes\n";
        } else{
            cout<<"No\n";
        }
    }
}