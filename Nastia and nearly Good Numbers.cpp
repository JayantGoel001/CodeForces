#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        ll a,b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO\n";
        }else {
            cout << "YES\n";
            ll sum = (a * b * 2);
            ll y = sum - a;
            cout<<a<<" "<<y<<" "<<sum<<"\n";
        }
    }
}