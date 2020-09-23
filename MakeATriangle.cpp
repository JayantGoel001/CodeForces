#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int count = 0;
    if(a+b<=c){
        int x = (c-(a+b)+1);
        count+= x;
        a+=x;
    }
    if (c+a<=b){
        int x = (b-(a+c)+1);
        count+= x;
        c+=x;
    }
    if (b+c<=a){
        int x = (a-(c+b)+1);
        count+= x;
        b+=x;
    }
    cout<<count;
}