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
    cin >> t;
    while (t--) {
        int r,g,b,w;
        cin >> r>>g>>b>>w;
        int mini = min(min(r,g),b);
        bool found = false;
        map<int,int> mp;
        mp[r%2]++;
        mp[g%2]++;
        mp[b%2]++;
        mp[w%2]++;
        if (mp[0]==4 || mp[0]==3){
            found = true;
        } else {
            for (int i = 1; i <= min((int)2,mini); ++i) {
                mp.clear();
                r--;
                g--;
                b--;
                w += 3;
                mp[r%2]++;
                mp[g%2]++;
                mp[b%2]++;
                mp[w%2]++;
                if (mp[0]==4 || mp[0]==3){
                    found = true;
                    break;
                }
            }
        }
        if (found){
            cout<<"Yes";
        } else{
            cout<<"No";
        }
        cout << "\n";
    }
}