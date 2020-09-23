#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n%3==0){
        cout<<"1 1 "<<(n-2);
    }else{
        cout<<"1 2 "<<(n-3);
    }
}