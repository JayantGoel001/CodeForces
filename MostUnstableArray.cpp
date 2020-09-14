#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i <t; ++i) {
        int n,m;
        cin>>n>>m;
        if (n==1){
            cout<<"0\n";
        } else if(n==2 || n==3){
            cout<<m<<"\n";
        } else if (n==m){
            cout<<2*m<<"\n";
        }
        else{
            cout<<m*(n-1)/2<<"\n";
        }
    }
}
