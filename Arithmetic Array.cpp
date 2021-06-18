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
        int ar[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum>=n){
            cout<<abs(sum-n)<<"\n";
        } else{
            cout<<"1\n";
        }
    }
}