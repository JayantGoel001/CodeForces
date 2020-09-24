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
        if (m.count(x)){
            m[x]=i;
        } else {
            m.insert(make_pair(x, i));
        }
    }
    map<int,int> output;
    for(auto it= m.begin();it!=m.end();it++){
        output.insert(make_pair(it->second,it->first));
    }
    cout<<output.size()<<"\n";
    for(auto it= output.begin();it!=output.end();it++){
        cout<<it->second<<" ";
    }

}