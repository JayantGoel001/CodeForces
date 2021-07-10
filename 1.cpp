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
        int x1,y1;
        cin >> x1>>y1;
        int x2,y2;
        cin >> x2>>y2;
        int xb,yb;
        cin >> xb>>yb;
        int answer = abs(x1-x2) + abs(y1-y2);
        if ((x1 == x2 && x1==xb && yb>min(y1,y2) && yb<max(y1,y2)) || (y1==y2 && y1==yb && xb>min(x1,x2) && xb<max(x1,x2))){
            answer+=2;
        }
        cout<<answer;
        cout << "\n";
    }
}