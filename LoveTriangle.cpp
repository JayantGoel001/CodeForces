#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *f = new int[n];
    for (int i = 0; i < n; ++i) {
        cin>>f[i];
        f[i]-=1;
    }
    bool  isYes = false;
    for (int i = 0; i < n; ++i) {
        if (f[f[f[i]]] == i) {
            isYes = true;
            cout<<"YES\n";
            break;
        }
    }
    if (!isYes){
        cout<<"NO\n";
    }
}