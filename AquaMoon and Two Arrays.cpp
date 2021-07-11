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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        int s1=0,s2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s1+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            s2+=b[i];
        }
        if(s1!=s2){
            cout<<-1<<endl;

        } else {
            vector<pair<int, int>> diff(n);
            for (int i = 0; i < n; i++) {
                diff[i].first = a[i] - b[i];
                diff[i].second = i;
            }
            sort(diff.begin(), diff.end());
            int i = 0, j = n - 1;
            vector<pair<int, int>> ans;
            while (i < j) {
                int x = min(abs(diff[i].first), diff[j].first);
                if (x) {
                    for (int k = 0; k < x; k++) {
                        ans.push_back(make_pair(diff[i].second, diff[j].second));
                    }
                    diff[i].first += x;
                    diff[j].first -= x;
                    continue;
                }

                if (x == abs(diff[i].first)) {
                    i++;
                } else if (x == abs(diff[j].first)) {
                    j--;
                }
            }
            cout << ans.size() << endl;
            for (auto p : ans) {
                cout << p.second + 1 << " " << p.first + 1 << endl;
            }
        }
    }
}