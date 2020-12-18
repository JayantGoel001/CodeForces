#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    int evenA = 0;
    int oddA = 0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if (a[i]%2==0){
            evenA++;
        } else{
            oddA++;
        }
    }
    int evenB = 0;
    int oddB = 0;
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
        if (b[i]%2==0){
            evenB++;
        } else{
            oddB++;
        }
    }
    cout<<min(evenA,oddB)+min(evenB,oddA);
}