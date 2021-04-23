#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,m;
        cin>>n>>m;
        ll **b = new ll*[n];
        for (int i = 0; i < n; ++i) {
            b[i] = new ll[m];
            for (int j = 0; j < m; ++j) {
                cin>>b[i][j];
            }
            sort(b[i],b[i]+m);
            rotate(b[i],b[i]+m-i,b[i]+m);
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout<<b[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}