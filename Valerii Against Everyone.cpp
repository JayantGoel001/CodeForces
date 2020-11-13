#include <iostream>
#include <math.h>

#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        ll ar[n];
        ll sum=0;
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            ar[j] = pow(2,ar[j]);
            sum+=ar[j];
        }
        int m = sum/2;
        ll dp[m+1][n+1];
        for (int j = 0; j < m+1; ++j) {
            for (int k = 0; k < n+1; ++k) {
                dp[j][k]= false;
            }
        }
        for (int j = 0; j <= n; ++j) {
            dp[0][j]= true;
        }
        for (int j = 1; j <= m; ++j) {
            dp[j][0]= false;
        }
        for (int j = 1; j <=m; ++j) {
            for (int k = 1; k <= n; ++k) {
                dp[j][k] = dp[j][k-1];
                if (j>=ar[k-1]){
                    dp[j][k]=  dp[j][k] | dp[j-ar[k-1]][k-1];
                }
            }
        }
        if (dp[m][n]==true){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}