#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n==1){
        cout<<"1\n1";
    }
    for (int i = 2; i <=n ; ++i) {
        if (n%i==0 && n/i<10){
            int x = n/i;
            cout<<i<<"\n";
            for (int j = 0; j < i; ++j) {
                cout<<x<<" ";
            }
            break;
        }
    }
}