#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int main(){
    ll n;
    cin>>n;
    vector<ll> v;
    ll prod = 1;

    for (int i = 1; i < n; ++i) {
        if (GCD(i,n)==1){
            v.push_back(i);
            prod = (prod*i)%n;
        }
    }
    if (prod!=1){
        v.pop_back();
    }
    cout<<v.size()<<"\n";
    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i]<<" ";
    }
}
