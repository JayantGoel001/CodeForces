#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        if (n==1 || n==2 || n==3){
            cout<<n-1<<"\n";
        }
        else if (n%2==0){
            cout<<"2\n";
        } else{
            cout<<"3\n";
        }
    }
}