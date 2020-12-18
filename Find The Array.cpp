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
                ll inc = ar[j];
                ll dec = ar[j];
                ll count = 0;
                while (true){
                    if (ar[j-1]%inc==0){
                        b[j] = inc;
                        break;
                    }else if (ar[j-1]%dec==0){
                        b[j] = dec;
                        break;
                    }
                    inc++;
                    dec--;
                    count++;
                    if (count==ar[j-1]){
                        b[j]=ar[j-1];
                        break;
                    }
                }
                ar[j] = b[j];
            }
        }
        for (int j = 0; j < n; ++j) {
            cout<<ar[j]<<" ";
        }
        cout<<"\n";
    }
}