#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        ll ar[n];
        ll sum=0;
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            sum+=ar[j];
        }
        ll required = sum / n;



    }
}