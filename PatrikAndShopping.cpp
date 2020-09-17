#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b<c){
        cout<<(a+b)*2;
    }
    else{
        cout<<a+b+c;
    }
}