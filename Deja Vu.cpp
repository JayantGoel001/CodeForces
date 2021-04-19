#include <iostream>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int n = str.length();
        set<int> s;
        for (int i = 0; i < n; ++i) {
            if (str[i] == 'a') {
                s.insert(n - i - 1);
            }
        }
        int i =0;
        bool found = false;
        while (i<n){
            if (s.count(i)==0){
                found = true;
                break;
            }
            i++;
        }
        if (found){
            cout<<"YES\n";
            cout<<str.substr(0,i)+"a"+str.substr(i)<<"\n";
        } else{
            cout<<"NO\n";
        }
    }
}