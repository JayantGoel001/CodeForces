#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<max(a,max(b,c))+min(a,min(b,c))<<"\n";
    }
}
