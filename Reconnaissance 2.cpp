#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    int minHeight = INT16_MAX;
    int aPos = -1;
    int bPos = -1;
    for (int i = 0; i < n; ++i) {
        if (minHeight>abs(ar[i]-ar[(i+1)%n])){
            aPos = i;
            bPos = (i+1)%n;
            minHeight = abs(ar[i]-ar[(i+1)%n]);
        }
    }
    cout<<aPos+1<<" "<<bPos+1;
}