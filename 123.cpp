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
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int win1 = max(s1,s2);
        int loss1 = min(s1,s2);
        int win2 = max(s3,s4);
        int loss2 = min(s3,s4);
        if (loss1<=win2 && loss2<=win1){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}