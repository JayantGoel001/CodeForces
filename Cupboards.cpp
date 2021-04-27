#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l,r;
    int zerosL = 0;
    int zerosR = 0;
    for (int i = 0; i < n; ++i) {
        cin>>l>>r;
        if (l==0){
            zerosL++;
        }
        if (r==0){
            zerosR++;
        }
    }
    int oneL = n-zerosL;
    int oneR = n-zerosR;
    cout<<min(oneL,zerosL) + min(oneR,zerosR);
}