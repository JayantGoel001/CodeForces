#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll *ar = new ll[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    for (int i = 0; i < n; ++i) {
        if (ar[i]%2==0){
            cout<<ar[i]-1<<" ";
        }else{
            cout<<ar[i]<<" ";
        }
    }

}
