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
        int n,m,i,j;
        cin>>n>>m>>i>>j;
        if ((i<=n/2 && j<=m/2)|| (i>=n/2 && j>=m/2)){
            cout<<"1 "<<m<<" "<<n<<" 1 "<<"\n";
        } else {
            cout<<"1 1 "<<n<<" "<<m<<"\n";
        }
    }
}