#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int q;
    cin>>q;
    for (int i = 0; i < q; ++i) {
        int n;
        cin>>n;
        int ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        sort(ar,ar+n);
        int c=0;
        for (int j = 0; j < n-1; ++j) {
            if (ar[j+1]-ar[j]==1){
                c++;
                cout<<"2\n";
                break;
            }
        }
        if (c==0){
            cout<<"1\n";
        }
    }
}