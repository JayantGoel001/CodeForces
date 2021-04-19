#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    sort(ar,ar+n);

    ll dp[n][n];
    dp[0][0]= ar[n-1] - ar[0];
    for (int i = 1; i < n; ++i) {
        dp[0][i] = dp[0][i-1] + ar[n-i-1] - ar[0];
        dp[i][0] = dp[i-1][0] + ar[n-1] - ar[i];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n-i; ++j) {
            dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + ar[n-j-1] - ar[i];
        }
    }
    ll ans = LLONG_MAX;
    for (int i = 0; i < n; ++i) {
        ans = min(ans,dp[i][n-i-1]);
    }
    cout<<ans;
}