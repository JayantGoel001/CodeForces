#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        long long int l,r;
        cin>>l>>r;
        if((r-l)>=(2*l - l)){
            cout<<l<<" "<<2*l<<"\n";
        }
    }
}