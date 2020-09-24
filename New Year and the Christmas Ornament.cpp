#include <iostream>
using namespace std;
int main(){
    int y,b,r;
    cin>>y>>b>>r;
    int mini=min(y,min(b,r));
    if (mini==y){
        if (y+1<=b && y+2<=r){
            cout<<3*(y+1);
        }else{
            cout<<3*y;
        }
    }else if(mini==b){
        if (b-1<=y && b+1<=r){
            cout<<3*b;
        }else{
            cout<<3*(b-1);
        }
    }else{
        if (r-2<=y && r-1<=b){
            cout<<3*(r-1);
        }else{
            cout<<3*(r-2);
        }
    }
}