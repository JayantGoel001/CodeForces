#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;

int getGCD(vector<int> vector) {
    int gcd = vector[0];
    for (int i = 1; i <vector.size() ; ++i) {
        gcd = __gcd(gcd,vector[i]);
    }
    return gcd;
}

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
        ll num = n;
        vector<int> v;
        while (num!=0){
            int x = num%10;
            if (x!=0 && n%x!=0){
                v.push_back(n%x);
            }
            num/=10;
        }
        if (v.size()!=0){
            int gcd = getGCD(v);
            cout<<gcd<<"\n";
            while (!isFair(n)) {
                n += gcd;
            }
        }
        cout<<n<<"\n";
    }
}
