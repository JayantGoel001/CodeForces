#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#define int long long int
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int power(int x,int y,int MOD){
    if (y==0){
        return 1;
    }
    if (y%2==0){
        return power((x*x)%MOD,y/2,MOD)%MOD;
    } else{
        return (x * power((x*x)%MOD,(y-1)/2,MOD)%MOD)%MOD;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    int MOD = pow(10,9)+7;
    while (t--) {
        int n,m;
        cin>>n>>m;
        char **ar = new char *[n];
        for (int i = 0; i < n; ++i) {
            ar[i] = new char [m];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin>>ar[i][j];
            }
        }
        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (ar[i][j]=='#'){
                    count++;
                }
            }
        }
        cout<<(power(2,count,MOD) - count/(n*m) +MOD)%MOD<<"\n";
    }
}