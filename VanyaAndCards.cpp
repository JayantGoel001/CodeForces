#include<iostream>
#include <map>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    map<int,int> m;
    for (int i = 0; i < n; ++i) {
        if (m.count(-1*ar[i])!=0){
            m[-1*ar[i]] =m[-1*ar[i]]-1;
        } else if(m.count(ar[i])!=0){
            m[ar[i]] = m[ar[i]] + 1;
        } else{
            m.insert(make_pair(ar[i],1));
        }
    }
    int count = 0;
    for(auto it = m.begin();it!=m.end();it++){
        count+=it->second;
    }
    cout<<count;
}