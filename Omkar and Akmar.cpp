#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int long long int
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int power(int x, int y,int MOD = INF) {
    int z = 1;
    while (y){
        if (y%2){
            z = (z*x)%MOD;
        }
        x = (x*x)%MOD;
        y/=2;
    }
    return z%MOD;
}
int C(int x,int y,int *fact,int *inv,int MOD){
    if (x<y){
        return 0;
    }
    return (fact[x] * inv[y]%MOD * inv[x-y] % MOD)%MOD;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    int MOD = power(10,9)+7;
    while (t--) {
        int n;
        cin>>n;
        int fact[n+1];
        int inv[n+1];
        fact[0] = 1;
        for (int i = 1; i <= n; ++i) {
            fact[i] = (i * fact[i-1])%MOD;
        }
        inv[n] = power(fact[n],MOD-2,MOD);
        for(int i=n;i>0;i--){
            inv[i-1] = (inv[i] * i)%MOD;
        }
        int output = 0;
        for (int i = 2; i <=n ; i+=2) {
            output = (output + 2*fact[i] * (C(i,n-i,fact,inv,MOD) + C(i-1,n-i-1,fact,inv,MOD))%MOD)%MOD;
        }
        cout<<output<<"\n";
    }
}