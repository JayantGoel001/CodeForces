#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int w = n%10;
    int i=1;
    while (true){
        if ((w*i)%10 == 0 || (w*i)%10==k){
            break;
        }
        i++;
    }
    cout<<i;
}