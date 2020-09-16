#include <iostream>
using namespace std;
void solution(int*ar,int *br,int n,int m){
    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < m; ++k) {
            if(ar[j]==br[k]){
                cout<<"YES\n";
                cout<<"1 "<<ar[j]<<"\n";
                return;
            }
        }
    }
    cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,m;
        cin>>n>>m;
        int *ar = new int[n];
        int *br = new int[m];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        for (int j = 0; j < m; ++j) {
            cin>>br[j];
        }
        solution(ar,br,n,m);
    }
}