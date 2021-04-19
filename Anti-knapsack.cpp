#include <iostream>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        set<int> s;
        for (int i = n; i >= 1; --i) {
            if (!s.count(k-i) && i!=k){
                s.insert(i);
            }
        }
        cout<<s.size()<<"\n";
        for(auto it=s.begin(); it!=s.end();it++){
            cout<<*it<<" ";
        }
        cout<<"\n";
    }
}