#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,m;
        cin>>n>>m;
        ll a[n][m];
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                cin>>a[j][k];
            }
        }
        ll b[n][m];
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                if (j+1<n && a[j][k]==a[j+1][k]){
                   b[j][k]=a[j][k]+1;
                }
            }
        }
    }

}