#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        ll ar[n];
        ll sum=0;
        ll maxEl = -1;
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            sum+=ar[j];
            maxEl = max(maxEl,ar[j]);
        }
        ll remainSum = sum-maxEl;
        if (remainSum!=0 && remainSum%maxEl==0){
            cout<<"0\n";
        } else if (remainSum==0){
            cout<<abs(remainSum-maxEl)<<"\n";
        }
        else{
            cout<<abs(remainSum-maxEl)<<"\n";
        }
    }
}
