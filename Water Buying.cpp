#include <iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    for (int i = 0; i < q; ++i) {
        long long int n;
        int a,b;
        cin>>n>>a>>b;
        if (a<=b/2 || n==1){
            cout<<n*a<<"\n";
        }
        else{
            long long int cost = 0L;
            while (n%2!=0){
                cost = cost + (long long int)a;
                n-=1;
            }
            cost+=n*b/2;
            cout<<cost<<"\n";
        }

    }
}