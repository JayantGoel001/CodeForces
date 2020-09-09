#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int tot = 3*max(a,max(b,c)) - a - b -c;
        n = n-tot;
        if(n>=0 && n%3==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}

