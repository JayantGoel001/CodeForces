#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        double sum=0.0;
        for (int j = 0; j < n; ++j) {
            int x;
            cin>>x;
            sum+=x;
        }
        cout<<(int)ceil(sum/n)<<"\n";
    }
}