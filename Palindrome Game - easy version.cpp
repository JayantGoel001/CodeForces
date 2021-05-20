#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string str;
        cin.ignore();
        getline(cin,str);
        cin.clear();
        int zero = 0;
        for (int i = 0; i < n; ++i) {
            if (str[i]=='0'){
                zero++;
            }
        }
        if (zero==2 && n%2!=0 && str[n/2]=='0' ){
            cout<<"DRAW\n";
        } else if (zero==1 || zero%2==0){
            cout<<"BOB\n";
        } else{
            cout<<"ALICE\n";
        }
    }
}