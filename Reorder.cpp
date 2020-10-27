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
        int *ar = new int[n];
        long long int sum=0L;
        for (int j = 0; j < n; ++j) {
            cin>>ar[i];
            sum+=ar[i];
        }
        if (sum==m){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }

    }
}