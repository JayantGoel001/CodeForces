#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define int long long int
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        bool jumps = false;
        ordered_set<int> s;
        s.insert(ar[0]);
        for (int i = 1; i <n ; ++i) {
            s.insert(ar[i]);
            int pos1 = s.order_of_key(ar[i]);
            int pos2 = s.order_of_key(ar[i-1]);
            if (abs(pos2 - pos1)>1){
                jumps = true;
                break;
            }
        }
        if (!jumps){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}