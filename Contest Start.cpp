#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int k=1;
    cin>>k;
    while(k--){
        int n,x,t;
        cin>>n>>x>>t;
        if (t/x==0 || n==1){
            cout<<"0\n";
        } else{
            int u = min(n-1,t/x);
            cout<<u*(2*n - u -1)/2<<"\n";
        }
    }
}