#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        ll ar[n];
        ll sum = 0;
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            sum+=ar[j];
        }
        bool isAlready = true;
        for (int j = 1; j < n; ++j) {
            if ( ar[j]%ar[j-1]!=0 && ar[j-1]%ar[j]!=0 ){
                isAlready = false;
                break;
            }
        }
        if (isAlready){
            for (int j = 0; j <n ; ++j) {
                cout<<ar[j]<<" ";
            }
        } else {
            for (int j = 0; j < n; ++j) {
                cout << sum / n << " ";
            }
        }
        cout<<"\n";
    }
}