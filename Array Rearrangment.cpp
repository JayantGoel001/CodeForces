#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,x;
        cin>>n>>x;
        int a[n];
        int b[n];
        for (int j = 0; j < n; ++j) {
            cin>>a[j];
        }
        for (int j = 0; j < n; ++j) {
            cin>>b[n-j-1];
        }
        bool isPossible = true;
        for (int j = 0; j < n; ++j) {
            if (a[j]+b[j]>x){
                isPossible = false;
                cout<<"No\n";
                break;
            }
        }
        if (isPossible){
            cout<<"Yes\n";
        }
    }
}