#include <iostream>
using namespace std;
int main(){
    int y,b,r;
    cin>>y>>b>>r;
    int i=1;
    int j=2;
    int k=3;
    while (i<=y && j<=b && k<=r){
        i++;
        j++;
        k++;
    }
    cout<<(i+j+k)-3;
}