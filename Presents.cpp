#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> m;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        m.insert(pair<int,int>(x,i+1));
    }
    for(auto x=m.begin();x!=m.end();x++){
        cout<<x->second<<" ";
    }

}