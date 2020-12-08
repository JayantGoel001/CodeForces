#include <iostream>
using namespace std;

int GCD(int n, int m) {
    if (n==0){
        return m;
    }
    if(m==0){
        return n;
    }
    if (n==1 || m==1){
        return 1;
    }
    if (n>m){
        return GCD(n-m,m);
    } else{
        return GCD(n,m-n);
    }
}

int main(){
    int n,m,z;
    cin>>n>>m>>z;
    int gcd = GCD(n,m);
    int lcm = n*m/gcd;
    cout<<z/lcm;
}
