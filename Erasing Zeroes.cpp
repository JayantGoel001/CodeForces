#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        string str;
        cin>>str;
        int first1 =0 , last1 = 0;
        for (int j = 0; j < str.length(); ++j) {
            if (str[j]=='1'){
                first1=j;
                break;
            }
        }
        for (int j = str.length()-1; j >=0 ; --j) {
            if (str[j]=='1'){
                last1=j;
                break;
            }
        }
        int count =0;
        for (int j = first1+1; j <last1 ; ++j) {
            if (str[j]=='0'){
                count++;
            }
        }
        cout<<count<<'\n';
    }
}