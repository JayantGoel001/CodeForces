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
        int n;
        cin>>n;
        int count = 0;
        while (n!=1){
            if (n%3!=0){
                count = -1;
                break;
            } else if (n%2!=0){
                n = n*2;
                count++;
            } else{
                n/=6;
                count++;
            }
        }
        cout<<count<<"\n";
    }
}