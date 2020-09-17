#include <iostream>
using namespace std;
int main(){
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int output= 0;
    int minValue256 = min(k2,min(k5,k6));
    output += 256* minValue256;
    k2 -= minValue256;

    int minValue32 = min(k2,k3);
    output+=32*minValue32;
    cout<<output;
}