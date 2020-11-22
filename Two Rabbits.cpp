#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        if ((y-x)%(a+b)==0){
            cout<<(y-x)/(a+b)<<"\n";
        } else{
            cout<<"-1\n";
        }
    }
}