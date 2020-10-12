#include <iostream>
using namespace std;
int main(){
    int n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
    int moves1 = n1;
    int moves2 = n2;
    if (moves1<=moves2){
        cout<<"Second";
    }else{
        cout<<"First";
    }
}