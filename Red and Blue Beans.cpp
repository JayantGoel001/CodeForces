#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while (t--){
        int r,b,d;
        cin>>r>>b>>d;
        int remaining;
        if (r%b==0){
            remaining = r-b;
        } else if (b%r==0){
            remaining = b - r;
        } else if (r>b){
            remaining = r -(r/b)*b;
        } else{
            remaining = b - (b/r)*r;
        }
        if (remaining<=d){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}