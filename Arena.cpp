#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ar[n];
        int minEle = INT_MAX;
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
            minEle = min(ar[i],minEle);
        }
        for (int i = 0; i < n; ++i) {
            ar[i]-=minEle;
        }
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (ar[i]>0){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}