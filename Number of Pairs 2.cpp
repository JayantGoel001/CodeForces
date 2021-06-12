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
        int n,l,r;
        cin>>n>>l>>r;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int answer = 0;
        for (int i = 0; i < n; ++i) {
            int lb = (int)lower_bound(ar+i+1,ar+n,l-ar[i]);
            int ub = (int)upper_bound(ar+i+1,ar+n,r-ar[i]);
            answer+= (ub-lb);
        }
        cout<<answer/8<<"\n";
    }
}