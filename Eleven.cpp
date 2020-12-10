#include <iostream>
using namespace std;
int main(){
    bool isFibonacci[1001];
    for (int i = 1; i <= 1000; ++i) {
        isFibonacci[i] = false;
    }
    isFibonacci[1]= true;
    isFibonacci[2]= true;
    int n;
    cin>>n;
    int a = 1;
    int b = 1;
    int c = 0;
    while (c<=1000){
        c = a+b;
        a = b;
        b = c;
        if (c<1000) {
            isFibonacci[c] = true;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (isFibonacci[i+1]){
            cout<<"O";
        } else{
            cout<<"o";
        }
    }
}