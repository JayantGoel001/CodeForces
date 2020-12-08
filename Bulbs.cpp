#include <iostream>
#include <set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int y;
        cin>>y;
        for (int j = 0; j < y; ++j) {
            int a;
            cin>>a;
            s.insert(a);
        }
    }
    if (s.size()==m){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
}