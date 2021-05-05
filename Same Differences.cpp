#include <iostream>
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
        int maxi =0;
        for (int i = 0; i <n ; ++i) {
            for (int j = i+1; j <n ; ++j) {
                if (ar[j] - ar[i] == j - i) {
                    maxi++;
                }
            }
        }
        cout<<maxi<<"\n";
    }
}