#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        if (x>0){
            pos+=x;
        } else{
            neg+=x;
        }
    }
    cout<<pos-neg;
}