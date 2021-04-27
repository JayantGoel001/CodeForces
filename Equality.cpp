#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    map<char,int> mp;
    for (int i = 0; i < k; ++i) {
        mp[(char)(i+65)] = 0;
    }
    for (int i = 0; i < str.length(); ++i) {
        mp[str[i]]++;
    }
    int minEl = INT_MAX;
    for(auto it:mp){
        minEl = min(minEl,it.second);
    }
    cout<<minEl*k;
}