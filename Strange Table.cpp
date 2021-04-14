#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        ll n,m,x;
        cin>>n>>m>>x;
        ll row = x%n;
        ll col = x/n+1;
        if (row==0){
            col--;
            row=n;
        }
        cout<<((row-1)*m)+col<<"\n";
    }
}