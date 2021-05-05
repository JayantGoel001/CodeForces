#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int x;
        map<int,int> mp;
        int maxi = 0;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            maxi += mp[x-i];
            mp[x-i]++;
        }
        cout<<maxi<<"\n";
    }
}