#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,x;
        cin>>n>>x;
        int count = 1;
        n-=2;
        while (n>0){
            n-=x;
            count++;
        }
        cout<<count<<"\n";
    }
}