#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if (x1==x2 || y1==y2){
            cout<<abs(x1-x2)+abs(y1-y2)<<"\n";
        } else{
            cout<<abs(x1-x2)+abs(y1-y2)+2<<"\n";
        }
    }
}