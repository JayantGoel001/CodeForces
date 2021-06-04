#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    while(t--){
        int n,m;
        cin>>n>>m;
        if (min(n,m)%2==0){
            cout<<"Malvika\n";
        } else{
            cout<<"Akshat\n";
        }
    }
}