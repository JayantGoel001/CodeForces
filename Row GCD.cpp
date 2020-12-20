#include <iostream>
#include <algorithm>

#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int ar[n];
    int b[m];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }
    sort(ar,ar+n);
    for (int i = 0; i < m; ++i) {
        int x = b[i]+ar[0];
        bool isTrue = true;
        for (int j = 0; j < n; ++j) {
            if ((ar[j]+b[i])%x!=0){
                isTrue = false;
                break;
            }
        }
        if (isTrue){
            cout<<x<<" ";
        } else{
            cout<<1<<" ";
        }
    }
}