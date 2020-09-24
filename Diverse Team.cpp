#include <iostream>
#include <map>
#include <list>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int *ar = new int[n];
    map<int,list<int>> m;
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        if (m.count(ar[i])==0){
            m.insert(make_pair(ar[i],list<int>()));
        }
        m[ar[i]].push_back(i+1);
    }
    if (k<=m.size()){
        cout<<"YES\n";
        for (auto it=m.begin();it!=m.end();it++){
            if (k==0){
                break;
            }
            cout<<(it->second).front()<<" ";
            k--;
        }
    } else{
        cout<<"NO\n";
    }
}