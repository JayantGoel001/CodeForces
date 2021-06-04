#include<bits/stdc++.h>
#define int long long int
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
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            if (ar[i]%2==0){
                v.push_back(ar[i]);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (ar[i]%2!=0){
                v.push_back(ar[i]);
            }
        }
        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j <n; ++j) {
                if (GCD(v[i],2*v[j])>1){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
}