#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int sum = n*(n+1)/2;
    int rem = m%sum;
    int x=1;
    while (rem>=x){
        rem-=x;
        x++;
    }
    cout<<rem;
}