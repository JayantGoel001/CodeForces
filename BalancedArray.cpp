#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        if(x%4==0){
            cout<<"YES\n";
            int sum=0;
            for (int j = 1; j <= x/2; ++j) {
                cout<<2*j<<" ";
                sum+=2*j;
            }
            for (int j = 0; j <x/2-1; ++j) {
                cout<<2*j+1<<" ";
                sum-=(2*j+1);
            }
            cout<<sum<<"\n";
        }else{
            cout<<"NO\n";
        }
    }
}