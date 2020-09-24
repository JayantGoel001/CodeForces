#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int *ar = new int[n];
    int max = 0;
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        if (max<ar[i]){
            max=ar[i];
        }
    }
    if (max<=k){
        cout<<n;
    }
    else{
        int count=0;
        for (int i = 0; i <n ; ++i) {
            if (ar[i]<=k){
                count++;
            } else{
                break;
            }
        }

        for (int i = n-1; i >=0 ; --i) {
            if (ar[i]<=k){
                count++;
            } else{
                break;
            }
        }
        cout<<count;
    }
}
