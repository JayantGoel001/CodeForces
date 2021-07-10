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
        int k,n,m;
        cin >> k>>n>>m;
        int ar[n],br[m];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        for (int i = 0; i < m; ++i) {
            cin>>br[i];
        }
        bool exists = true;
        vector<int> v;
        int i,j;
        i = 0;
        j = 0;
        while (i<n && j<m) {
            int current = 0;
            if (ar[i] == 0) {
                v.push_back(ar[i++]);
                k++;
                continue;
            } else if (br[j] == 0) {
                v.push_back(br[j++]);
                k++;
                continue;
            }else if (ar[i]<br[j]){
                current = ar[i++];
            } else{
                current = br[j++];
            }
            if (current<=k){
                v.push_back(current);
            } else{
                exists = false;
                break;
            }
        }
        while (i<n){
            if (ar[i]==0){
                k++;
                v.push_back(ar[i++]);
            }else if(ar[i]<=k){
                v.push_back(ar[i++]);
            } else{
                exists = false;
                break;
            }
        }
        while (j<m){
            if (br[j]==0){
                k++;
                v.push_back(br[j++]);
            } else if (br[j]<=k){
                v.push_back(br[j++]);
            } else{
                exists = false;
                break;
            }
        }
        if(exists){
            for (int l = 0; l < v.size(); ++l) {
                cout<<v[l]<<" ";
            }
        } else{
            cout<<"-1";
        }
        cout << "\n";
    }
}