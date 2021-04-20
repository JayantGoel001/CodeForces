#include <iostream>
#include <valarray>

#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    ll mod = pow(10,9)+7;
    while (t--){
        int n,k;
        cin>>n>>k;
        ll num = 1;
        for (int i = 0; i < k; ++i) {
            num = (num*n)%mod;
        }
        cout<<num<<"\n";
    }
}