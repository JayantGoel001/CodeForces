#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x = n%10;
    n=n/10;
    n = n*10;
    if (x>5){
        n+=10;
    }
    cout<<n;
}