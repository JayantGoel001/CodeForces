#include <iostream>

long long int getSheets(long long int x, long long int k);

using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int output;
    long long int x = n*2;
    long long int y = n*5;
    long long int z = n*8;
    output = getSheets(x,k)+getSheets(y,k)+getSheets(z,k);
    cout<<output;
}

long long int getSheets(long long int x, long long int k) {
    return  (x%k)==0?(x/k):(x/k+1);
}
