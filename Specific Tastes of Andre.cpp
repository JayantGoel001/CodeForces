#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int j=1;
        while (n--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}