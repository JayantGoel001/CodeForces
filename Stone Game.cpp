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
                minPos = i+1;
            }
            if (maxEle<ar[i]){
                maxEle = ar[i];
                maxPos = i+1;
            }
        }
        if (minPos>n/2 && maxPos>n/2){
            minPos = n+1 - minPos;
            maxPos = n+1 - maxPos;
        }
        int output ;
        if (minPos<maxPos){
            output = minPos;
            output+= min(maxPos - minPos,n+1-maxPos);
        } else{
            output = maxPos;
            output+= min(minPos - maxPos,n+1-minPos);
        }
        cout<<output<<"\n";
    }
}