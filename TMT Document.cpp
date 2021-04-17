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
        int countT = 0;
        int countM = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i]=='T'){
                countT++;
            } else{
                countM++;
            }
        }
        if (countT == 2*countM){
            int count = 0;
            bool result = false;
            for (int i = 0; i < str.length(); ++i) {
                if (str[i]=='T'){
                    count++;
                } else{
                    count--;
                    if (count<0){
                        result = true;
                        break;
                    }
                }

            }
            if (!result){
                count = 0;
                bool no = false;
                for (int i = str.length()-1; i >=0 ; i--) {
                    if (str[i]=='T'){
                        count++;
                    } else{
                        count--;
                        if (count<0){
                            cout<<"NO\n";
                            no = true;
                            break;
                        }
                    }
                }
                if (!no){
                    cout<<"YES\n";
                }
            } else{
                cout<<"NO\n";
            }
        } else{
            cout<<"NO\n";
        }
    }
}
