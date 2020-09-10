#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        vector<int> v;
        for (int j = 0; j < 2*n; ++j) {
            int x;
            cin>>x;
            if (count(v.begin(),v.end(),x)==0)
            {
                v.push_back(x);
            }
        }
        for(auto x=v.begin();x!=v.end();x++){
            cout<<*x<<" ";
        }
        cout<<"\n";
    }
}