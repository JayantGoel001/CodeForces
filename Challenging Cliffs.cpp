#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
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
        sort(ar,ar+n);
        int startDiff = ar[1] - ar[0];
        int lastDiff = ar[n-1] - ar[n-2];
        int diff = min(startDiff,lastDiff);
        int index = -1;
        for (int i = 1; i < n-1; ++i) {
            if (ar[i+1] - ar[i]<diff){
                diff = ar[i+1] - ar[i];
                index = i;
            }
        }
        vector<int> output;
        if (index==-1){
            if (startDiff>=lastDiff){
                output.push_back(ar[n-2]);
                for (int i = 0; i < n; ++i) {
                    if (i!=n-2){
                        output.push_back(ar[i]);
                    }
                }
            } else{
                output.push_back(ar[0]);
                for (int i = 2; i < n; ++i) {
                    output.push_back(ar[i]);
                }
                output.push_back(ar[1]);
            }
        } else{
            output.push_back(ar[index]);
            for (int i = index+2; i < n; ++i) {
                output.push_back(ar[i]);
            }
            for (int i = 0; i < index; ++i) {
                output.push_back(ar[i]);
            }
            output.push_back(ar[index+1]);
        }
        for (int i = 0; i < n; ++i) {
            cout<<output[i]<<" ";
        }
        cout<<"\n";
    }
}