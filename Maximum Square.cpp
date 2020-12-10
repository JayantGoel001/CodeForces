#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int ar[n];
        int minEl = INT16_MAX;
        int maxEl = INT16_MIN;

        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            minEl = min(minEl,ar[j]);
            maxEl = max(maxEl,ar[j]);
        }
        int res = -1;
        for (int j = minEl; j <=maxEl; ++j) {
            int count = 0;
            for (int k = 0; k < n; ++k) {
                if (ar[k]>=j){
                    count++;
                }
            }
            if (count>=j){
                res=j;
            }
        }
        cout<<res<<"\n";
    }
}