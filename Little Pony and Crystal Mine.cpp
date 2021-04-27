#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        if (i<=n/2){
            for (int j = i; j < n / 2; ++j) {
                cout<<"*";
            }
            for (int j = 0; j < 2*i + 1; ++j) {
                cout<<"D";
            }
            for (int j = n/2+1; j <n-i ; ++j) {
                cout<<"*";
            }
        } else {
            for (int j = n-i-1; j <n/2 ; ++j) {
                cout<<"*";
            }
            for (int j = 0; j < 2*(n-i)-1; ++j) {
                cout<<"D";
            }
            for (int j = n-i-1; j < n / 2; ++j) {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}