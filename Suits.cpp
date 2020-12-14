#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll a,b,c,d,costA,costB;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin >> costA;
    cin >> costB;
    ll typeA = min(a,d);
    ll typeB = min(b,min(c,d));
    if (costA<=costB){
        ll cost = costB * typeB + costA * max(0LL,min(a,(d-typeB)));
        cout<<cost;
    } else{
        ll cost = costA * typeA + costB * max(0LL,min(b,min(c,d-typeA)));
        cout<<cost;
    }

}