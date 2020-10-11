#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    int a,b,c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    bool isNo = true;
    if (a>=x){
        a-=x;
        b=b+a;
        if (b>=y){
            b-=y;
            c=c+b;
            if (c>=z){
                cout<<"YES";
            }else{
                isNo= false;
            }
        }else{
            isNo= false;
        }
    }else{
        isNo= false;
    }
    if (!isNo) {
        cout << "NO";
    }
}