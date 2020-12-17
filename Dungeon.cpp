#include<iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        ll a,b,c;
        cin>>a>>b>>c;
        int x = (a+b+c)/7;
        if (x<=min(a,min(b,c))){
            a-=x;
            b-=x;
            c-=x;
            if ((a+b+c+x)%7==0){
                cout<<"YES\n";
            } else{
                cout<<"NO\n";
            }
        } else{
            cout<<"NO\n";
        }
    }
}