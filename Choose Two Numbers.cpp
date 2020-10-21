#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int maxa = INT16_MIN;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        maxa = max(maxa,a[i]);
    }
    int m ;
    cin>>m;
    int b[m];
    int maxb = INT16_MIN;
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
        maxb = max(maxb,b[i]);
    }
    cout<<maxa<<" "<<maxb;
}