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
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    bool sim = 0;
    while(n!=0){
        if(sim==0)
        {
            n-=gcd(a,n);
        }
        else{
            n-=gcd(b,n);
        }
        sim = !sim;
    }
    cout<<!sim;
}
