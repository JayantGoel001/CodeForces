#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int q;
    cin>>q;
    for (int i = 0; i < q; ++i) {
        ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if (l1!=r2){
            cout<<l1<<" "<<r2<<"\n";
        } else if (r1!=l2){
            cout<<r1<<" "<<l2<<"\n";
        } else{
            ll a = (l1+r1)/2;
            ll b = (l2+r2)/2;
            if (a!=b) {
                cout <<a<< " " <<b<< "\n";
            }else{
                cout<<a<<" "<<r2-b<<"\n";
            }
        }
    }
}