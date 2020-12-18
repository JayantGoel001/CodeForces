#include <iostream>
#include <cmath>

#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        ll ar[n];
        ll sum = 0;
        for (int j = 0; j < n; ++j) {
            cin >> ar[j];
            sum += ar[j];
        }
        ll b[n];
        for (int j = 0; j < n; ++j) {
            if(j==0){
                b[j]=ar[j];
            } else if (ar[j]>=ar[j-1]){
                int maxDiv = ceil((float)ar[j]/(float)ar[j-1]);
                int minDiv = floor((float)ar[j]/(float)ar[j-1]);
                int minDiff = ar[j] - minDiv*ar[j-1];
                int maxDiff = maxDiv*ar[j-1] - ar[j];
                if (maxDiff>=minDiff){
                    b[j] = minDiv*ar[j-1];
                } else{
                    b[j] = maxDiv*ar[j-1];
                }
                ar[j]=b[j];
            } else{
                int maxDiv = ceil((float)ar[j-1]/(float)ar[j]);
                int minDiv = floor((float)ar[j-1]/(float)ar[j]);
                int minDiff = ar[j-1] - minDiv*ar[j];
                int maxDiff = maxDiv*ar[j] - ar[j-1];
                if (maxDiff>=minDiff){
                    b[j] = ar[j]-minDiff;
                } else{
                    b[j] = ar[j]+maxDiff;
                }
                ar[j] = b[j];
            }
        }
        for (int j = 0; j < n; ++j) {
            cout<<b[j]<<" ";
        }
        cout<<"\n";
    }
}