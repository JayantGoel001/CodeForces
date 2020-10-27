#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        map<char,int> m;
        for (int j = 0; j < n; ++j) {
            string str;
            cin>>str;
            for (int k = 0; k < str.length(); ++k) {
                char x1 = str[k];
                if (m.count(x1)==0){
                    m.insert(make_pair(x1,1));
                }else{
                    m[x1] = m[x1]+1;
                }
            }
        }
        bool doesNotExists = false;
        for(auto it=m.begin();it!=m.end();it++){
            if ((it->second)%n!=0){
                doesNotExists = true;
                cout<<"NO\n";
                break;
            }
        }
        if (!doesNotExists){
            cout<<"YES\n";
        }
    }
}