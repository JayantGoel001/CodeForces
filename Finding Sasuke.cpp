#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        for (int j = 0; j < n / 2; ++j) {
            cout<<ar[n-j-1]*-1<<" ";
        }
        for (int j = n/2; j < n; ++j) {
            cout<<ar[n-j-1]<<" ";
        }
        cout<<"\n";
    }
}