#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int l,r;
        cin>>l>>r;
        int diff = r-l;
        float a = r+diff;
        if (l%(int)a >=a/2.0 && r%(int)a>=a/2.0){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}