#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,m;
        cin>>n>>m;
        int sum=0;
        for (int j = 0; j < n; ++j) {
            int x;
            cin>>x;
            sum+=x;
        }
        cout<<min(sum,m)<<"\n";
    }
}