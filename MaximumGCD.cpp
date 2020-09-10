#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<"\n";
        }else{
            cout<<(n-1)/2<<"\n";
        }
    }
}