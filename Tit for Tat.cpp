#include<iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        int i =0;
        while (k>0 && i!=n-1){
            int minEl = min(ar[i],k);
            ar[i] -=minEl;
            if (ar[i]==0){
                i++;
            }
            ar[n-1]+=minEl;
            k-=minEl;
        }
        for (int j = 0; j < n; ++j) {
            cout<<ar[j]<<" ";
        }
        cout<<"\n";
    }
}