#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int count = 0;
    while (a>=0 && b>=0 && c>=0){
        a-=1;
        b-=2;
        c-=4;
        count++;
    }
    cout<<(count-1)*7;
}