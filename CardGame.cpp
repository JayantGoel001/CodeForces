#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int *a1 = new int[k1];
        int *a2 = new int[k2];
        int max1 = -1;
        int max2 = -1;
        for (int j = 0; j < k1; ++j) {
            cin>>a1[j];
            if (max1 < a1[j]){
                max1 = a1[j];
            }
        }
        for (int j = 0; j < k2; ++j) {
            cin>>a2[j];
            if (max2 < a2[j]){
                max2 = a2[j];
            }
        }
        if (max1>max2){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}