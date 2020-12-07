#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    if (n%2==0) {
        cout << ar[n / 2-1];
    } else{
        cout<<ar[n/2];
    }
}