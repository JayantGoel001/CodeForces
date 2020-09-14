#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int a,b;
        cin>>a>>b;
        if(a>b){
            b = 2*b;
        }else{
            a = a*2;
        }
        int output= pow(max(a,b),2);
        cout<<output<<"\n";
    }
}