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
        ll mul = 1;
        ll num = pow(2,k);
        for (int i = 0; i < n; ++i) {
            mul = (mul*num)%mod;
        }
        cout<<(mul)*2<<"\n";
    }
}