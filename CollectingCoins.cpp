#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        if(max(a,max(b,c))-min(a,min(b,c))<n && (a+b+c+n)%3==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}

