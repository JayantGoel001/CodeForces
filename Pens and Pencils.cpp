#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        float a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int output = ceil(a/c)+ ceil(b/d);
        if (output<=k){
            cout<<ceil(a/c)<<" "<<ceil(b/d)<<"\n";
        }else{
            cout<<"-1\n";
        }
    }
}