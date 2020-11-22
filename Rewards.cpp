#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    int n;
    cin>>n;
    int a = ceil((float)(a1+a2+a3)/5.0);
    int b = ceil((float )(b1+b2+b3)/10.0);
    if (a+b<=n){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
}