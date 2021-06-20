#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    map<int,map<char,int>> mp;
    mp[0].insert(make_pair(str[0],1));
    for (int i = 1; i < n; ++i) {
        mp[i] = mp[i-1];
        char ele = str[i];
        mp[i][ele]++;
    }
    for (int i = 0; i < q; ++i) {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        map<char,int> mp1 = mp[l-1];
        map<char,int> mp2 = mp[r];
        int count = 0;
        for(auto it:mp2){
            count += (int)(it.first - 'a'+1) * (it.second - mp1[it.first]);
        }
        cout<<count<<"\n";
    }
}