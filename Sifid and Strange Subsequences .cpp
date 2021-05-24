#include <iostream>
#include <algorithm>
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
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        if(ar[0]>0){
            cout<<"1\n";
        } else {
            int count = n-1;
            for (int i = 0; i < count; ++i) {
                if (ar[i+1]-ar[i]<ar[count]){
                    count--;
                    i--;
                }
            }
            cout << count+1 << "\n";
        }
    }
}
