#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int k=-1;
    map<int,vector<int>> m;
    int prevNum=-1;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        if (x<=prevNum)
        {
            m.insert(make_pair(++k,vector<int>()));
        }
        m[k].push_back(x);
        prevNum = x;
    }
    cout<<m.size()<<"\n";
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(it->second).size()<<" ";
    }
}
