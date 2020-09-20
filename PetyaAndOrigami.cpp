#include <iostream>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int output = ((n*15)%k)==0?(n*15)/k:(n*15)/k+1;
    cout<<output;
}