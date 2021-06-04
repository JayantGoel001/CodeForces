#include <iostream>
#include <algorithm>

#define int long long int
using namespace std;
int32_t main(){
    int t=1;
    while (t--){
        int n;
        cin>>n;
        int ar[n];
        int remainingSum = 0;
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
            remainingSum+=ar[i];
        }
        sort(ar,ar+n,greater<int>());
        int sum =0;
        int i;
        for (i = 0; i < n; ++i) {
            sum+=ar[i];
            remainingSum-=ar[i];
            if (sum>remainingSum){
                break;
            }
        }
        cout<<i+1<<"\n";
    }
}