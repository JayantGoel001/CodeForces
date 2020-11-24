#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        for (int j = 2; j <=n ; ++j) {
            cout<<j<<" ";
        }
        cout<<1<<"\n";
    }
}