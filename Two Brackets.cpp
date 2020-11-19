#include <iostream>
#include <string>
#include <vector>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        string str;
        cin>>str;
        vector<int> sqstr;
        vector<int> curstr;
        int count =0;
        for (int j = 0; j < str.length(); ++j) {
            if (str[j]=='['){
                sqstr.push_back(j);
            } else if (str[j]=='('){
                curstr.push_back(j);
            } else if (str[j]==']'){
                if (!sqstr.empty()){
                    sqstr.pop_back();
                    count++;
                }
            } else if (str[j]==')'){
                if (!curstr.empty()) {
                    curstr.pop_back();
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
}