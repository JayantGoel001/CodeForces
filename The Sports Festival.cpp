#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
bool sortByVal(const pair<ll,ll> &a,const pair<ll,ll> &b){
    return (a.second < b.second);
}
int main(){
    int n;
    cin>>n;
    ll ar[n];
    map<ll,ll> mp;
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        if (mp.count(ar[i])==0){
            mp[ar[i]] = 0;
        }
        mp[ar[i]]++;
    }
    sort(mp.begin(),mp.end(), sortByVal);

    vector<ll> v;
    for(auto it=mp.begin();it!=mp.end();it++){
        for (int i = 0; i < it->second; ++i) {
            v.push_back(it->first);
        }
    }
    int d = 0;
    int minEl = v[0];
    for (int i = 0; i < v.size(); ++i) {
        if (v[0]<minEl){
            minEl = v[0];
        }
        d+=(v[i]-minEl);
    }
    cout<<d<<"\n";
}