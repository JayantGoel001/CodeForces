#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        ll r,b,d;
        cin>>r>>b>>d;
        if (max(r,b)== min(r,b)){
            cout<<"YES\n";
        } else{
            ll n = min(r,b);
            ll d1 = max(r,b)%n + max(r,b)/n -1;
            if (d1<=d){
                cout<<"YES\n";
            } else{
                cout<<"NO\n";
            }
        }
    }
}