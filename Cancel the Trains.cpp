#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,m;
        cin>>n>>m;
        vector<int> a1;
        vector<int> a2;
        for (int j = 0; j < n; ++j) {
            int x;
            cin>>x;
            a1.push_back(x);
        }
        for (int j = 0; j < m; ++j) {
            int x;
            cin>>x;
            a2.push_back(x);
        }
        int count = 0;
        for (int j = 0; j < n; ++j) {
            int ele = a1[j];
            if (binary_search(a2.begin(),a2.end(),ele)){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}