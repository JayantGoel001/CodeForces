#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    int n;
    cin>>n;
    ll ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    ll d = 0;
    int z = n-1;
    int a = 0;
    for(int i=0;i<n;i++) {
        d += abs(ar[z] - ar[a]);
        ll x = abs(ar[z-1] - ar[a]);
        ll y = abs(ar[z] - ar[a+1]);
        if (x<y){
            z--;
        } else{
            a++;
        }
    }
    cout<<d<<"\n";
}