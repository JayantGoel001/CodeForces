#include <iostream>
#include <cmath>

using namespace std;
int main(){
    float n;
    cin>>n;
    cout<<ceil((n*n)/2)<<'\n';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i+j)%2==0){
                cout<<"C";
            } else{
                cout<<'.';
            }
        }
        cout<<'\n';
    }
}