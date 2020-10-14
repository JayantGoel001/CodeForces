#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int *ar = new int[n];
    ll min = INT64_MAX;
    ll max = INT64_MIN;
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        if (min>ar[i]){
            min = ar[i];
        }
        if(ar[i]>max){
            max = ar[i];
        }
    }

    if (max-min+1==n){
        cout<<"0";
    }else{
        cout<<(max-min+1-n);
    }

}