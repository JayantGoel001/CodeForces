#include <iostream>
#include <valarray>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        bool found = false;
        for (int i = 0; i < n; ++i) {
            int x =floor(sqrt(ar[i]));
            if ( x*x != ar[i]){
                found = true;
                break;
            }
        }
        if (found){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}