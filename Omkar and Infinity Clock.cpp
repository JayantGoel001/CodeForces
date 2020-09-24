#include <iostream>
using namespace std;
void returnChanges(long long int *ar,int n,int maxi){
    for (int j = 0; j < n; ++j) {
        ar[j] = maxi - ar[j];
    }
}
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        long long int k;
        cin>>n>>k;
        long long int *ar= new long long int[n];
        long long int maxi = INT64_MIN;
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            maxi = max(maxi,ar[j]);
        }
        returnChanges(ar,n,maxi);

        k--;
        k%=2;
        maxi=INT64_MIN;
        for (int j = 0; j < n; ++j) {
            maxi = max(maxi,ar[j]);
        }
        for (int j = 0; j < k; ++j) {
            returnChanges(ar,n,maxi);
        }
        for (int j = 0; j < n; ++j) {
            cout<<ar[j]<<" ";
        }
        cout<<"\n";
    }
}