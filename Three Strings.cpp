#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        string a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        int len = a.length();
        bool isPossible = true;
        for (int j = 0; j < len; ++j) {
            if (a[j]!=c[j] && b[j]!=c[j]){
                cout<<"NO\n";
                isPossible= false;
                break;
            }
        }
        if(isPossible){
            cout<<"YES\n";
        }
    }
}