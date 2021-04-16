#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for (int i = 1; i <=k/2 ; ++i) {
            v.push_back(i);
        }
        for (int i = k+1; i <=n; ++i) {
            v.push_back(i);
        }
        cout<<v.size()<<"\n";
        for (int i = 0; i < v.size(); ++i) {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}