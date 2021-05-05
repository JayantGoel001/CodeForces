#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,m,k;
        cin>>n>>m>>k;
        int dp[n+1][m+1];
        for (int j = 0; j <=n; ++j) {
            for (int l = 0; l <=m ; ++l) {
                dp[j][l]= 0;
            }
        }
        for (int j = 2; j <=n ; ++j) {
            dp[j][1] = dp[j-1][1] + 1;
        }
        for (int j = 2; j <=m ; ++j) {
            dp[1][j] = dp[1][j-1] + 1;
        }
        dp[1][1] = 0;
        for (int j = 2; j <=n ; ++j) {
            for (int l = j; l <=m ; ++l) {
                dp[j][l] = min(dp[j - 1][l] + j, dp[j][l - 1]+l);
            }
        }
        if (dp[n][m]==k){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}