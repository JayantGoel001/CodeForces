#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int w,b;
        cin>>w>>b;
        int wo = min(k1,k2);
        int x = k1+k2 - 2 * wo;
        wo+=x/2;
        if (wo>=w){
            int bo = min(n-k1,n-k2);
            int y = 2*n - k1 - k2 - 2 * bo;
            bo+=y/2;
            if (bo>=b){
                cout<<"YES\n";
            } else{
                cout<<"NO\n";
            }
        } else{
            cout<<"NO\n";
        }
    }
}