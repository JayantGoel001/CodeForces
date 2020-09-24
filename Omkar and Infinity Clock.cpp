#include <iostream>
using namespace std;
void returnChanges(int*ar,int n,int maxi){
    for (int j = 0; j < n; ++j) {
        ar[j] = maxi - ar[j];
    }
}
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,k;
        cin>>n>>k;
        int *ar= new int[n];
        int maxi = 0;
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            maxi = max(maxi,ar[j]);
        }
        returnChanges(ar,n,maxi);

        k--;
        k%=2;
        maxi=-1;
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