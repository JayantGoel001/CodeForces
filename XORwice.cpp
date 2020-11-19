#include <iostream>
#define ll long long int
using namespace std;
ll GCD(int a,int b){
    if (a==0){
        return b;
    }
    if (b==0){
        return a;
    }
    if (a==1 || b==1){
        return 1;
    }
    if (a>b){
        return GCD(a-b,b);
    } else{
        return GCD(a,b-a);
    }
}
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        ll a,b;
        cin>>a>>b;
        ll x = GCD(a,b);
        cout<<x<<" a";
        cout<<(a^x)+(b^x)<<"\n";
    }
}