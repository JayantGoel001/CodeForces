#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    float sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum+=ar[i];
    }
    cout<<ceil(abs(sum)/x);
}