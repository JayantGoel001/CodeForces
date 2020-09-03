#include<iostream>
using namespace std;
int gcd(int x,int y){
    if(x==1 || y==1){
        return 1;
    }
    else if(x==0){
        return y;
    }
    else if (y==0){
        return x;
    }
    else{
        if(x>y){
            return gcd(x-y,y);
        }
        else{
            return gcd(x,y-x);
        }
    }
}
bool inRange(int x,int l,int r){
    if(x>=l && x<=r){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    for(int x=0;x<n;x++){
        int l,r;
        cin>>l>>r;
        if(l*2<=r){
            cout<<l<<" "<<2*l<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
}
