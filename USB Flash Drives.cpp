#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int count = 0;
    for (int i = n-1; i>=0 ; i--) {
        m-=ar[i];
        count++;
        if (m<=0){
            break;
        }
    }
    cout<<count;
}