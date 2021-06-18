#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
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
        if (n&1){
            cout<<"Bob\n";
        } else{
            int count = 0;
            while (n%2==0){
                n/=2;
                count++;
            }
            if (n>1){
                cout<<"Alice\n";
            } else{
                if (count%2!=0){
                    cout<<"Bob\n";
                } else{
                    cout<<"Alice\n";
                }
            }
        }
    }
}