#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int count=0;
    for (int i = 0; i < n; i+=2) {
        count+=(ar[i+1]-ar[i]);
    }
    cout<<count;
}