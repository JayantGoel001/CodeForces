#include <iostream>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int lambda = n/k;
    if (lambda%2==0){
        cout<<"NO";
    } else{
        cout<<"YES";
    }
}