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
        int candy[3];
        candy[1]=0;
        candy[2]=0;
        for (int j = 0; j < n; ++j) {
            candy[ar[j]]+=1;
        }
        if ((candy[1]+2*candy[2])%2==0 ){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}