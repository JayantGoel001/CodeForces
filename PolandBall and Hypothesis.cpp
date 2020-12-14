#include <iostream>
using namespace std;
int main(){
    int TOTAL = 1000000+1;
    bool isPrime[TOTAL];
    for (int i = 0; i <= TOTAL; ++i) {
        isPrime[i] = true;
    }
    for (int i = 2; i*i <=TOTAL ; ++i) {
        for (int j = i*i; j <=TOTAL ; j+=i) {
            isPrime[j] = false;
        }
    }
    int n;
    cin>>n;
    for (int i = 1; i <=TOTAL ; i+=n) {
        if (!isPrime[i]){
            cout<<(i-1)/n;
            break;
        }
    }
}