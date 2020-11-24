#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int ar[n];
        map<int,int> m;
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        for (int j = 1; j <=n ; ++j) {
            if (m.count(ar[j-1])==0){
                m.insert(make_pair(ar[j-1],0));
            }
            m[ar[j-1]] +=1;
        }
        bool unique = false;
        int x;
        for(auto it:m){
            if (it.second == 1){
                unique= true;
                x = it.first;
                break;
            }
        }
        if (unique){
            for (int j = 0; j < n; ++j) {
                if (ar[j]==x){
                    cout<<j+1<<"\n";
                }
            }
        } else{
            cout<<"-1\n";
        }
    }
}