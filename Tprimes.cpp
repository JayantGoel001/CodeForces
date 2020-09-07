#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tot = 1000000;
    bool *isPrime = new bool[tot];
    memset(isPrime,true,tot);
    for (int i = 2; i*i < tot; ++i) {
        for (int j = i*i; j < tot; j+=i) {
            isPrime[j]= false;
        }
    }

    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        long int x;
        cin>>x;
        int root_x = sqrt(x);

        if(root_x*root_x == x){
            if(isPrime[root_x]){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }

    }
}