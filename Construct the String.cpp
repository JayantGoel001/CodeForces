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
        int n,a,b;
        cin>>n>>a>>b;
        for (int i = 0; i < n; ++i) {
            cout<<(char)(i%b + 'a');
        }
        cout<<"\n";
    }
}