#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,k;
        cin>>n>>k;
        int ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        int maxEl=-1;
        for (int j = 0; j < n; ++j) {
            int out=0;
            for (int l = 0; l < n; ++l) {
                if (j!=l) {
                    out += abs(k-ar[l])/ar[j];
                }
            }
            maxEl=max(out,maxEl);
        }
        cout<<maxEl<<"\n";
    }
}