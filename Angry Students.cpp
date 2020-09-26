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
        int index = str.find('A');
        if (index!=string::npos){
            str = str.substr(index,n-index);
        }
        int maxi =0;
        int countP = 0;
        for (int j = 0; j < str.length(); ++j) {
            if (str[j]=='A'){
                maxi= max(maxi,countP);
                countP=0;
            }
            else{
                countP++;
            }
        }
        cout<<max(maxi,countP)<<"\n";
    }
}