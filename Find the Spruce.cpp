#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,m;
        cin>>n>>m;
        char ar[n][m];
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                cin>>ar[j][k];
            }
        }
        int count = 0;
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                if (ar[j][k]=='*'){
                    for (int l = 0; l < n-j; ++l) {
                        if (j+l<n){
                            if (k-l>=0 && k+l<m){
                                int isAll = true;
                                for (int i1 = k-l; i1 <=k+l ; ++i1) {
                                    if (ar[j+l][i1]=='.'){
                                        isAll= false;
                                        break;
                                    }
                                }
                                if (isAll){
                                    count++;
                                } else{
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<count<<"\n";
    }
}