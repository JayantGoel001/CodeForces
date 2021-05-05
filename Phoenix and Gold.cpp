#include<iostream>
#include <math.h>
#include <algorithm>

#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,x;
        cin>>n>>x;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        if (ar[n-1]==x){
            rotate(ar,ar+1,ar+n);
            if (ar[n-1]==x){
                cout<<"NO\n";
            } else{
                cout<<"YES\n";
                for (int i = 0; i < n; ++i) {
                    cout<<ar[i];
                }
            }
        } else{
            cout<<"YES\n";
            for (int i = 0; i < n; ++i) {
                cout<<ar[i];
            }
        }
    }
}