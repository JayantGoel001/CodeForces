#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        int l=0;
        int r=n-1;
        for (int j = 0; j < n; ++j) {
            if (ar[j]==1){
                l=j;
                break;
            }
        }
        for (int j = n-1; j >=0 ; --j) {
            if (ar[j]==1){
                r=j;
                break;
            }
        }
        int zeros = 0;
        for (int j = l; j <r; ++j) {
            if (ar[j]==0){
                zeros++;
            }
        }
        cout<<zeros<<"\n";
    }
}