#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int r,b,d;
        cin>>r>>b>>d;
        if (abs(r-b) <= d*min(r,b)){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}