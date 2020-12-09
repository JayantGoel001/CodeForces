#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    int sortedAr[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        sortedAr[i] = ar[i];
    }
    sort(sortedAr,sortedAr+n);
    reverse(sortedAr,sortedAr+n);

    for (int i = 0; i < n; ++i) {
        int x = ar[i];
        int pos =-1;
        for (int j = 0; j < n; ++j) {
            if (x==sortedAr[j])
            {
                pos=j;
                break;
            }
        }
        cout<<pos+1<<" ";
    }
}