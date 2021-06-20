#include<bits/stdc++.h>
#define int unsigned long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        vector<int> v;
        for (int i = 0; i < n-1; ++i) {
            if (ar[i+1]-ar[i]>x){
                v.push_back(ar[i+1]-ar[i]);
            }
        }
        sort(v.begin(), v.end());
        int i = 0;
        while (i<v.size()){
            if ((v[i]-1)/x<=k){
                k-=(v[i]-1)/x;
                i++;
            } else{
                break;
            }
        }
        cout<<v.size()-i + 1<<"\n";
    }
}