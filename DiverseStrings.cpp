#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        string str;
        cin>>str;
        set<char> s;
        for (int j = 0; j < str.size(); ++j) {
            s.insert(str[j]);
        }
        bool isYes = true;
        if (s.size()==str.size()){
            int k =0;
            auto it = s.begin();
            while (k<s.size()-1){
                if ((*it - *(++it))!=-1){
                    isYes=false;
                    cout<<"No\n";
                    break;
                }
                k++;
            }
            if (isYes){
                cout<<"Yes\n";
            }
        }else{
            cout<<"No\n";
        }
    }
}