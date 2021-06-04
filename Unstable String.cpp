#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int **dp = new int*[str.length()+1];
        for (int i = 0; i <str.length()+1; ++i) {
            dp[i] = new int[2];
        }
        dp[0][0] = 0;
        dp[0][1] = 0;
        int output = 0;
        for (int i = 1; i <= str.length(); ++i) {
            if (str[i-1]=='?'){
                dp[i][0] = dp[i-1][1] + 1;
                dp[i][1] = dp[i-1][0] + 1;
            } else if (str[i-1]=='0'){
                dp[i][0] = 1 +dp[i-1][1];
                dp[i][1] = 0;
            } else{
                dp[i][1] = 1 +dp[i-1][0];
                dp[i][0] = 0;
            }
            output += max(dp[i][0],dp[i][1]);
        }
        cout<<output<<"\n";
    }
}