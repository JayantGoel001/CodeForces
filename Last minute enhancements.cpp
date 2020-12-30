#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        int size=  ar[n-1]+2;
        int hash[size];
        for (int j = 1; j <size ; ++j) {
            hash[j] = 0;
        }
        for (int j = 0; j < n; ++j) {
            hash[ar[j]]+=1;
        }
        for (int j = 1; j < size; ++j) {
            if (hash[j]>1){
                for (int k = j+1; k <size ; ++k) {
                    if (hash[k]==0){
                        hash[k]+=1;
                        hash[j]-=1;
                        break;
                    }
                }
            }
        }
        int count = 0;
        for (int j = 1; j <size ; ++j) {
            if (hash[j]!=0){
                count++;
            }
        }
        cout<<count<<"\n";
    }
};