#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
string generateString(string str,int k){
    string s;
    for (int i = 0; i < k; ++i) {
        s += str[i%str.size()];
    }
    return s;
}
string compare(string s1,string s2){
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i]<s2[i]){
            return s1;
        } else if (s1[i]>s2[i]){
            return s2;
        }
    }
    return s1;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
//    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        string output = generateString(str,k);
        for (int i = 0; i < n; ++i) {
            output = compare(output, generateString(str.substr(0,i+1),k));
        }
        cout<<output<<"\n";
    }
}