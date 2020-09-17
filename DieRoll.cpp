#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    int y,w;
    map<int,string> m;
    m.insert(make_pair(1,"1/1"));
    m.insert(make_pair(2,"5/6"));
    m.insert(make_pair(3,"2/3"));
    m.insert(make_pair(4,"1/2"));
    m.insert(make_pair(5,"1/3"));
    m.insert(make_pair(6,"1/6"));
    cin>>y>>w;
    cout<<m[max(y,w)];
}