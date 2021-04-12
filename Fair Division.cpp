#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        int count[3];
        count[1] = 0;
        count[2] = 0;
        for (int j = 0; j < n; ++j) {
            count[ar[j]]++;
        }
        if ((count[1]%2==0 && count[2]%2==0) || (count[2]%2==1 && count[1]>2 && count[1]%2==0)){
            cout<<"YES\n";
        } else if (count[1]%2==1 ||(count[1]==0 && count[2]%2==1)){
            cout<<"NO\n";
        }
    }
}