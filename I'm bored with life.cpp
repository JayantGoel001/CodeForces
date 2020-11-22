#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll a,b;
    cin>>a>>b;
    ll x = min(a,b);
    ll fact = 1;
    for (int i = 1; i <=x ; ++i) {
        fact*=i;
    }
    cout<<fact;
}