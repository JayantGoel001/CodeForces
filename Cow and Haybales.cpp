#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,d;
        cin>>n>>d;
        int ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        for (int j = 1; j <n ; ++j) {
            if(ar[j]*j<=d){
                d-=ar[j]*j;
                ar[0]+=ar[j];
            } else{
                ar[0]+=d/j;
                break;
            }
        }
        cout<<ar[0]<<"\n";
    }
}