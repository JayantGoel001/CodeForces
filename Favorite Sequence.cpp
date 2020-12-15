#include<iostream>
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
        for (int j = 0; j < n / 2; ++j) {
            cout<<ar[j]<<" "<<ar[n-j-1]<<" ";
        }
        if (n%2!=0){
            cout<<ar[n/2];
        }
        cout<<"\n";
    }
}