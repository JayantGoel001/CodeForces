#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int k,n;
        cin>>k>>n;
        for (int j = 0; j < k; ++j) {
            if (j%3==0){
                cout<<"a";
            } else if (j%3==1){
                cout<<"b";
            } else{
                cout<<"c";
            }
        }
        cout<<"\n";
    }
}