#include <iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    for (int i = 0; i < q; ++i) {
        long long int n;
        cin>>n;
        int count = 0;
        bool isNot = false;
        while (n!=1){
            if (n%2==0){
                n = n/2;
            } else if(n%3==0){
                n = 2*n/3;
            } else if(n%5==0){
                n = 4*n/5;
            } else{
                isNot = true;
                break;
            }
            count++;
        }
        if (isNot){
            cout<<"-1\n";
        } else{
            cout<<count<<"\n";
        }
    }
}