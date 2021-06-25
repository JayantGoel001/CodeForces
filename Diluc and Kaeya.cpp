#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
int GCD(int a,int b){
    if (b==0){
        return a;
    }
    return GCD(b,a%b);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        map<char,int> mp;
        mp['D'] = 0;
        mp['K'] = 0;
        map<pair<int,int>,int> mp2;
        for (int i = 0; i < n; ++i) {
            mp[str[i]]++;
            int gcd = GCD(max(mp['D'],mp['K']),min(mp['D'],mp['K']));
            cout<< ++mp2[make_pair(mp['D']/gcd,mp['K']/gcd)]<<" ";
        }
        cout<<"\n";
    }
}