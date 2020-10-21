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
            cout<<l2<<" "<<r1<<"\n";
        } else if (l1!=r1){
            cout<<l1<<" "<<r1<<"\n";
        } else if (l2!=r2){
            cout<<l2<<" "<<r2<<"\n";
        } else{
            cout<<(l1+r1)/2<<" "<<(l2+r2)/2<<"\n";
        }
    }

}