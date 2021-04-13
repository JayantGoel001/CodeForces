#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int *ar = new int [n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        int count = 0;
        for (int i = 0; i < n - 1; ++i) {
            float minEle = min(ar[i],ar[i+1]);
            float maxEle = max(ar[i],ar[i+1]);
            while (maxEle/minEle>2.0){
                maxEle = ceil(maxEle/2);
                count++;
            }
        }
        cout<<count<<"\n";
    }
}