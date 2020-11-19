#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x,y;
        cin>>x>>y;
        if(abs(x-y)>1){
            cout<<(x+y)+abs(x-y)-1<<"\n";
        } else{
            cout<<(x+y)<<"\n";
        }
    }
}