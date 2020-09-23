#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,char> m;
    m.insert(make_pair(1,'A'));
    m.insert(make_pair(3,'B'));
    m.insert(make_pair(2,'C'));
    m.insert(make_pair(0,'D'));
    n%=4;
    if (n==1){
        cout<<"0 "<<m[1];
    } else if(n==2){
        cout<<"1 "<<m[3];
    } else if (n==3){
        cout<<"2 "<<m[1];
    }else{
        cout<<"1 "<<m[1];
    }
}