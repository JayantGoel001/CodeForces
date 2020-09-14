#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        if (x%2==0){
            cout<<x/2<<"\n";
        }else{
            cout<<(x+1)/2<<"\n";
        }
    }
}