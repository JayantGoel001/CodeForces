#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        ll s,a,b,c;
        cin>>s>>a>>b>>c;
        ll tot = (ll)s/c;
        ll numberOfSpecial = tot/a;
        cout<<tot + numberOfSpecial*b<<'\n';
    }
}