#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int ar[n];
        int br[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        for (int j = 0; j < n; ++j) {
            cin>>br[j];
        }
        sort(ar,ar+n);
        sort(br,br+n);
        for (int j = 0; j < n; ++j) {
            cout<<ar[j]<<" ";
        }
        cout<<"\n";
        for (int j = 0; j < n; ++j) {
            cout<<br[j]<<" ";
        }
        cout<<"\n";
    }
}