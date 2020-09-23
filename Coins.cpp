#include <iostream>
using namespace std;
int main(){
    int n,S;
    cin>>n>>S;
    if (S%n==0){
        cout<<S/n;
    }else{
        cout<<S/n+1;
    }
}