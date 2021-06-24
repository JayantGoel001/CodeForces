#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    vector<string> v;
    for (int i = 97; i <97+26; ++i) {
        string x(1,i);
        v.push_back(x);
    }
    for (int i = 97; i <97 + 26; ++i) {
        for (int j = 97; j <97 + 26; ++j) {
            string x1(1,i);
            string x2(1,j);
            v.push_back(x1+x2);
        }
    }
    int k = 97;
    for (int i = 97; i <97 + 12; ++i) {
        for (int j = 97; j <97 + 26; ++j) {
            string x0(1,k);
            string x1(1,i);
            string x2(1,j);
            v.push_back(x0 + x1+x2);
        }
    }
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        set<string> s;
        for (int i = 1; i <= 3; ++i) {
            for (int j = 0; j < n-i+1; ++j) {
                s.insert(str.substr(j,i));
            }
        }
        int i;
        for(i= 0 ;i<v.size();i++){
            if (s.count(v[i])==0){
                break;
            }
        }
        cout<<v[i]<<"\n";
    }
}