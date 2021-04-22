#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        ll ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        ll x = ar[0];
        for (int i = 1; i < n; ++i) {
            x = x ^ ar[i];
        }
        if (x==0){
            cout<<"YES\n";
        }else{
            int count = 0;
            int cur = 0;
            for (int i = 0; i < n; ++i) {
                cur = cur^ar[i];
                if (cur==x){
                    count++;
                    cur=0;
                }
            }
            if (count>2){
                cout<<"YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}