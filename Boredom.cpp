#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        int TOT = pow(10,5);
        int dp[TOT + 1];
        for (int i = 0; i <=TOT; ++i) {
            dp[i] = 0;
        }
        for (int i = 1; i <=n; ++i) {
            dp[ar[i-1]]+=ar[i-1];
        }
        for (int i = 1; i <=TOT; ++i) {
            dp[i] = max(dp[i-1],dp[i-2] + dp[i]);
        }
        cout<<dp[TOT]<<"\n";
    }
}