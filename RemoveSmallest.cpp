#include<iostream>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int *ar = new int[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j] ;
        }
        sort(ar,ar+n);
        int sumgt2 = 0;
        for (int j = 0; j < n-1; ++j) {
            if((ar[j+1]-ar[j])>=2){
                sumgt2++;
            }
        }
        if (sumgt2==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

}