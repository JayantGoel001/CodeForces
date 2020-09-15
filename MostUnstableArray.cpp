#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i <t; ++i) {
        long long int n,m;
        cin>>n>>m;
        if (n==1){
            cout<<"0\n";
        } else if(n==2){
            cout<<m<<"\n";
        } else {
            cout<<2*m<<"\n";
        }
    }
}
