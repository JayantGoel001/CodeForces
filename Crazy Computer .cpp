#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int n;
    ll c;
    cin>>n>>c;
    ll ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    ll count = 1L;
    for (int i = 0; i < n-1; ++i) {
        if (ar[i+1]-ar[i]>c){
            count=1;
        }else{
            count++;
        }
    }
    cout<<count;
}

