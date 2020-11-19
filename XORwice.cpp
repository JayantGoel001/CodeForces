#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        ll a,b;
        cin>>a>>b;
        cout<<(a^b)<<"\n";
    }
}