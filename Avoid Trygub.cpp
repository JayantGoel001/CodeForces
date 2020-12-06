#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<char> v;
        for (int j = 0; j < n; ++j) {
            v.push_back(str[j]);
        }
        sort(v.begin(),v.begin()+n);
        for (int j = 0; j <n; ++j) {
            cout<<v[j];
        }
        cout<<'\n';
    }
}