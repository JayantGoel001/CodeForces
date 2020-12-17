#include<iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        ll a,b,c;
        cin>>a>>b>>c;
        float x = (a+b+c)/7.0;
        if (x<min(a,min(b,c))){
            a-=(int)x;
            b-=(int)x;
            c-=(int)x;
            if ((a+b+c)%6==0){
                cout<<"YES\n";
            } else{
                cout<<"NO\n";
            }
        } else{
            cout<<"NO\n";
        }
    }
}