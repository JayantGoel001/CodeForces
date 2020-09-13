#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    int maxEle=INT16_MIN;
    int *ar = new int[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        if (ar[i]>maxEle){
            maxEle = ar[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        count+=(maxEle-ar[i]);
    }
    cout<<count;
}