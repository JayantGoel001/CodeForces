#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        long long int *ar = new long long int[n];
        long long int *br = new long long int[n];
        long long int mina = INT64_MAX;
        long long int minb = INT64_MAX;
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            mina = min(ar[j],mina);
        }
        for (int j = 0; j < n; ++j) {
            cin>>br[j];
            minb = min(br[j],minb);
        }
        long long int output = 0;
        for (int j = 0; j < n; ++j) {
            output += max(ar[j]-mina,br[j]-minb);
        }
        cout<<output<<"\n";
    }
}