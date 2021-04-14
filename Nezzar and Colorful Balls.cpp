#include<iostream>
#include <map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        map<int,int> m;
        for (int i = 0; i < n; ++i) {
            if (m.count(ar[i])==0){
                m[ar[i]] = 0;
            }
            m[ar[i]]++;
        }
        int maxColor = 0;
        for (auto it=m.begin();it!=m.end();it++){
            maxColor = max(maxColor, it->second);
        }
        cout<<maxColor<<"\n";
    }
}