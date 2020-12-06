#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        string fixed = "trygub";
        int count = 0;
        int lastIndex=0;
        for (int j = 0; j < 6; ++j) {
            char x = fixed[j];
            for (int k = lastIndex; k < n; ++k) {
                if (x==str[k]){
                    count++;
                    lastIndex = k;
                    break;
                }
            }
        }
//        cout<<lastIndex<<" "<<count<<"\n";
        if (count==6){
            cout<<str.substr(lastIndex)+str.substr(0,lastIndex)<<"\n";
        } else{
            cout<<str<<"\n";
        }
    }
}