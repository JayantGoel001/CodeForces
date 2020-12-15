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
        bool found = false;
        int take = n-4;
        for (int j = 0; j <= 4; ++j) {
            string s = str.substr(0,j) + str.substr(j+take);
            if (s=="2020"){
                cout<<"YES\n";
                found= true;
                break;
            }
        }
        if (!found){
            cout<<"NO\n";
        }
    }
}