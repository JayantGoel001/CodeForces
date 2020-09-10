#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        long long int x;
        cin>>x;
        if(x<=2){
            cout<<"0\n";
        }else{
            if (x%2==0){
                cout<<x/2-1<<"\n";
            }else{
                cout<<x/2<<"\n";
            }
        }
    }
}