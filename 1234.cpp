#include<iostream>
#define ll long long int
using namespace std;
int main(){
    int t=1;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        if (n%2050==0){
            ll x = n/2050;
            ll sum=(ll)0;
            while (x!=0){
                sum+=(ll)x%10;
                x/=10;
            }
            cout<<sum<<"\n";
        } else{
            cout<<"-1\n";
        }
    }
}