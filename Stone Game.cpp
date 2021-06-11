#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        int minEle = INT_MAX;
        int maxEle = INT_MIN;
        int minPos = -1;
        int maxPos = -1;
        for (int i = 0; i < n; ++i) {
            if (minEle>ar[i]){
                minEle = ar[i];
                minPos = i;
            }
            if (maxEle<ar[i]){
                maxEle = ar[i];
                maxPos = i;
            }
        }
        int mini = min(minPos,maxPos);
        int maxi = max(maxPos,minPos);
        cout<<min(maxi+1,min(mini+n+1-maxi,n-mini))<<"\n";
    }
}