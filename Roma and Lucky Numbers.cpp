#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int count= 0;
    for (int i = 0; i < n; ++i) {
        string str;
        cin>>str;
        if (str.length()<=k){
            count++;
        } else{
            int c=0;
            for (int j = 0; j < str.length(); ++j) {
                if (str[j]=='4' || str[j]=='7'){
                    c++;
                }
            }
            if (c<=k){
                count++;
            }
        }
    }
    cout<<count;
}