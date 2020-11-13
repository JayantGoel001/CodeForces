#include <iostream>
#include <math.h>
#include <set>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        ll ar[n];
        set<ll> s;
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            ar[j] = pow(2,ar[j]);
            s.insert(ar[j]);
        }

        ll sumA=0;
        bool found=false;
        for (int j = 0; j < n; ++j) {
            sumA+=ar[j];
            ll sumB=0;
            for (int k = j+1; k <n ; ++k) {
                sumB+=ar[k];
            }
            if (sumA==sumB){
                found= true;
                cout<<"YES\n";
                break;
            }
        }
        if (!found){
            if (s.size()==n){
                cout<<"NO\n";
            } else{
                cout<<"YES\n";
            }
        }

    }
}