#include<iostream>
using namespace std;
int main(){
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
        int pathA = 0;
        for (int j = 0; j < n - 1; ++j) {
            if (ar[j][m-1]=='R')
            {
                pathA++;
            }
        }
        for (int j = 0; j <m-1; ++j) {
            if (ar[n-1][j]=='D'){
                pathA++;
            }
        }
        cout<<pathA<<"\n";
    }
}