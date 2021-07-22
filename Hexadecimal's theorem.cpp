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
    return b == 0 ? a : GCD(b, a % b);
}

int power(int x, int y, int MOD) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2, MOD) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    while (t--) {
        int n;
        cin>>n;
        set<int> v;
        int a = 0;
        int b = 1;
        v.insert(a);
        v.insert(b);
        int c = a + b;
        while (c<=n){
            v.insert(c);
            a = b;
            b = c;
            c = a + b;
        }
        bool found = false;
        for (auto it : v) {
            for(auto it2 : v) {
                int x = n - it - it2;
                if (v.find(x) != v.end()) {
                    cout<<it<<" "<< it2 << " " << x;
                    found  = true;
                    break;
                }
            }
            if (found){
                break;
            }
        }
        if (!found){
            cout<<"I'm too stupid to solve this problem";
        }
        cout << "\n";
    }
}