#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        ll ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        ll x = ar[0];
        vector<ll> v;
        for (int i = 1; i < n; ++i) {
            x = x ^ ar[i];
            if (x==0){
                v.push_back(ar[i]);
                if (i+1<n){
                    v.push_back(ar[i+1]);
                }
            }
        }
        if (x==0){
            cout<<"YES\n";
        }else if (v.size()>0){
            bool found = false;
            int el = v[0];
            for (auto i:v) {
                if (i!=el){
                    found = true;
                    cout<<"NO\n";
                    break;
                }
            }
            if (!found){
                cout<<"YES\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
}