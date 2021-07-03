#include <iostream>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        map<int,int> mp;
        for (int j = 0; j <n; ++j) {
            if (mp.count(ar[j])){
                ar[j]+=1;
            }
            mp[ar[j]]++;
        }
        cout<<mp.size()<<"\n";
    }
};