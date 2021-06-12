#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#define int long long int
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
typedef tree<pair<int, int>, null_type, less<pair<int , int>>, rb_tree_tag, tree_order_statistics_node_update > pbdS;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        pbdS tree;
        int answer = 0;
        for (int i = 0; i < n; ++i) {
            int x = l-ar[i];
            int y = r-ar[i];
            pair<int,int> p1 = make_pair(x-1,INF);
            pair<int,int> p2 = make_pair(y,INF);
            int index1 = tree.order_of_key(p1);
            int index2 = tree.order_of_key(p2);
            answer += (index2 - index1);
            tree.insert(make_pair(ar[i],i));
        }
        cout<<answer<<"\n";
    }
}