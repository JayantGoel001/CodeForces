#include <iostream>
#include <valarray>
#include <map>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int,ll> mp;
    mp[0] = 1;
    mp[1] = 11;
    mp[2] = 111;
    mp[3] = 1111;
    mp[4] = 11111;
    mp[5] = 111111;
    mp[6] = 1111111;
    mp[7] = 11111111;
    mp[8] = 111111111;
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        int prev = 0;
        for (int i = 1; i <= n; ++i) {
            int x = log(i) / log(10);
            if (i % mp[x] == 0) {
                prev++;
            }
        }
        cout<<prev<<"\n";
    }
}
