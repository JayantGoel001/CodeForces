#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int long long int
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
        char ar[n][n];
        vector<pair<int,int>> v;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin>>ar[i][j];
                if (ar[i][j]=='*'){
                    v.emplace_back(i,j);
                }
            }
        }
        pair<int,int> p1 = v[0];
        pair<int,int> p2 = v[1];
        pair<int,int> p3,p4;
        if (p1.first == p2.first){
            if (p1.first+1<n){
                p1.first++;
                p2.first++;
            } else{
                p1.first--;
                p2.first--;
            }
            p3 = p1;
            p4 = p2;
        } else if (p1.second == p2.second){
            if (p1.second+1<n){
                p1.second++;
                p2.second++;
            } else{
                p1.second--;
                p2.second--;
            }
            p3 = p1;
            p4 = p2;
        } else{
            p3 = {p1.first,p2.second};
            p4 = {p2.first,p1.second};
        }
        ar[p3.first][p3.second]='*';
        ar[p4.first][p4.second]='*';
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout<<ar[i][j];
            }
            cout<<"\n";
        }
    }
}