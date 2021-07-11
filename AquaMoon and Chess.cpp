#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int unsigned long long int
#define double double_t
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}
const int N= 100005;
const int MOD=998244353;
int power(int x, int y) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2) % MOD) % MOD;
    }
}
int fac[N + 1];

int modInverse(unsigned long long n){
    return power(n, MOD - 2);
}

int nCrModPFermat(unsigned long long n, int r){
    if (n < r) {
        return 0;
    }
    if (r == 0) {
        return 1;
    }
    return (fac[n] * modInverse(fac[r]) % MOD * modInverse(fac[n - r]) % MOD)% MOD;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    fac[0] = 1;
    for (int i = 1; i <= N; i++) {
        fac[i] = (fac[i - 1] * i) % MOD;
    }
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin>>str;
        int count=0;
        int value=0;
        int visited[n];
        for(int i=0;i<n;i++){
            visited[i]=0;
            if(str[i]=='0')
                count+=1;
        }
        for(int i=1;i<n;i++){
            if(str[i]=='1' && str[i-1]=='1' && visited[i-1]==0){
                value++;
                visited[i]=1;
            }
        }
        cout<<nCrModPFermat(count+value,value)<<endl;
    }
}