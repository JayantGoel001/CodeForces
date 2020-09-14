#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int x,y;
        cin>>x>>y;
        if((x*y)%2==0){
            cout<<(x*y)/2<<"\n";
        } else{
            cout<<(x*y+1)/2<<"\n";
        }
    }
}