#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int a,b,c;
        cin>>a>>b>>c;
        if (b==0){
            cout<<"0\n";
        } else {
            int x =0;
            if (2*b<=c){
                x+=b;
            } else{
                x += c / 2;
            }
            b -= x;
            if (2*a<=b){
                x+=a;
            } else{
                x+=b/2;
            }
            cout<<x*3<<'\n';
        }
    }

}