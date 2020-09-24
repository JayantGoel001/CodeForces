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
            long long  int volumeA = a*1;
            long long  int volumeB = b*2;

        }
    }
}