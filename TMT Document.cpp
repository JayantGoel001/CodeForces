#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int countT1 = 0;
        int countT2 = 0;
        int countM = 0;
        bool result = false;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i]=='T'){
                countT1++;
                countT2++;
            } else{
                countM++;
                countT2=0;
                if (countM>countT1){
                    cout<<"NO\n";
                    result = true;
                    break;
                }
            }
        }
        if (!result){
            if (countT2<=countM && 2*countM==countT1){
                cout<<"YES\n";
            } else{
                cout<<"NO\n";
            }
        }
    }
}
