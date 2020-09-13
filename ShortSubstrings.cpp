#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        string str;
        cin>>str;
        string redString="";
        for (int j = 0; j < str.length(); ++j) {
            redString+=str[j];
            if (j==0 || j==str.length()-1){
                continue;
            }
            j+=1;
        }
        cout<<redString<<"\n";
    }
}