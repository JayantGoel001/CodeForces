#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int px,py;
        cin>>px>>py;
        string str;
        cin>>str;
        map<char,int> m;
        m['U'] = 0;
        m['D'] = 0;
        m['L'] = 0;
        m['R'] = 0;
        for (int i = 0; i < str.length(); ++i) {
            m[str[i]]++;
        }
        if (px>=0 && m['R']>=px){
            if (py>=0 && m['U']>=py){
                cout<<"YES\n";
            } else if (py<0 && m['D']>=abs(py)){
                cout<<"YES\n";
            } else{
                cout<<"NO\n";
            }
        }else if (px<0 && m['L']>=abs(px)){
            if (py>=0 && m['U']>=py){
                cout<<"YES\n";
            } else if (py<0 && m['D']>=abs(py)){
                cout<<"YES\n";
            } else{
                cout<<"NO\n";
            }
        } else{
            cout<<"NO\n";
        }
    }
}
