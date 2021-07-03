#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int long long int
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

int power(int x, int y, int MOD = INF) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2) % MOD) % MOD;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin >> n>>a>>b;
        if ((a==1 && n%b==1) || (b==1)){
            cout<<"Yes";
        } else if (a==1 && n%b!=1){
            cout<<"No";
        } else{
            bool found = false;
            for (int i = 1; i <=n ; i*=a) {
                if ((n-i)%b==0){
                    found = true;
                    break;
                }
            }
            if (found){
                cout<<"Yes";
            } else{
                cout<<"No";
            }
        }
        cout << "\n";
    }
}