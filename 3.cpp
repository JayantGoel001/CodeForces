#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int long long int
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
//    int MOD = power(10, 9) + 7;

    while (t--) {
        int n;
        cin >> n;
        int d[n];
        for (int i = 0; i < n; ++i) {
            cin>>d[i];
        }
        sort(d,d+n);
        int sum = 0;
        int result = 0;
        for (int i = 0; i <n-2 ; ++i) {
            sum+=d[i];
            result = result + sum - d[i+2]*(i+1);
        }
        cout<<result<<"\n";
    }
}