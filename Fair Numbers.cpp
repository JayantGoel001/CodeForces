#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;
bool isFair(ll n) {
    ll num = n;
    while (num!=0){
        int x = num%10;
        if (x!=0 && n%x!=0){
            return false;
        }
        num/=10;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        ll n;
        cin>>n;
        while (!isFair(n)) {
            n += 1;
        }
        cout<<n<<"\n";
    }
}
