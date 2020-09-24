#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    n%=4;
    if (n==1 || n==2){
        cout<<"1";
    }else{
        cout<<"0";
    }
}