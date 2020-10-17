#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        int dist = abs(a-b);
        int nos = (min(a,b)-1) + (n - max(a,b));
        if (nos >=x){
            cout<<dist+x<<"\n";
        } else{
            cout<<dist+nos<<"\n";
        }
    }
}
