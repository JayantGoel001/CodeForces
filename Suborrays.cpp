#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        for (int j = 0; j < n; ++j) {
            cout<<j+1<<" ";
        }
        cout<<"\n";
    }
}