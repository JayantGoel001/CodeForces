#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        if(v[0]<0){
            cout<<"NO\n";
        } else{
            cout<<"YES\n";
            cout<<v[v.size()-1]+1<<"\n";
            for (int i = 0; i <= v[v.size() - 1]; ++i) {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
}