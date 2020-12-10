#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    double minEl = 101.0000000000001;
    for (int i = 0; i < n; ++i) {
        double a,b;
        cin>>a>>b;
        minEl = min(a/b,minEl);
    }
    printf("%.8lf\n",minEl*m);
}