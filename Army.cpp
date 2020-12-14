#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n-1];
    for (int i = 0; i < n - 1; ++i) {
        cin>>ar[i];
    }
    int a,b;
    cin>>a>>b;
    int years = 0;
    for (int i = a; i <b ; ++i) {
        years+=ar[i-1];
    }
    cout<<years;
}