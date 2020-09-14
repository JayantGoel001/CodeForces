#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n/2<<"\n";
    if (n%2!=0){
        for (int i = 0; i < n / 2-1; ++i) {
            cout<<"2 ";
        }
        cout<<"3";
    } else{
        for (int i = 0; i < n / 2; ++i) {
            cout<<"2 ";
        }
    }

}