#include <iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    for (int i = 0; i < q; ++i) {
        long long int n;
        int a,b;
        cin>>n>>a>>b;
        if (a<=b || n==1){
            cout<<n*a<<"\n";
        }
        else{
            int cost = 0;
            while (n%b!=0){
                cost = cost + a;
                n--;
            }
            cost+=n*b/2;
            cout<<cost<<"\n";
        }

    }
}