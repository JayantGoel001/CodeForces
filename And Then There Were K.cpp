#include<iostream>
#include <valarray>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        if (n==1){
            cout<<"0\n";
        }else {
            cout << (UINT32_MAX >> (__builtin_clz(n) + 1)) << '\n';
        }
    }
}
