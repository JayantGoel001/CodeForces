#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if (x<y && x+z<y){
        cout<<"-";
    } else if (x>y && x>y+z){
        cout<<"+";
    } else{
        if (z==0) {
            cout << "0";
        } else{
            cout<<"?";
        }
    }
}