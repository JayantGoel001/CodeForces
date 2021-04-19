#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    int ar[n];
    map<int,int> mp;
    mp[0] = 0;
    mp[1] = 0;
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        mp[ar[i]]++;
    }
    for (int i = 0; i < q; ++i) {
        int t,xk;
        cin>>t>>xk;
        if (t==1){
            xk--;
            mp[ar[xk]]--;
            ar[xk] = 1 - ar[xk];
            mp[ar[xk]]++;
        } else{
            if (xk>mp[1]){
                cout<<"0\n";
            } else{
                cout<<"1\n";
            }
        }
    }
}