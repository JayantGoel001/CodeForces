#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,k;
        cin>>n>>k;
        ll ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        sort(ar,ar+n);
        ll sum=ar[n-1];
        int x = n-2;
        for (int j = 0; j < k; ++j) {
            sum+=ar[x--];
        }
        cout<<sum<<"\n";
    }
}