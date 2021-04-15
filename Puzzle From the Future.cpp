#include<iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string b;
        cin>>b;
        string a="1";

        for (int i = 1; i < b.length(); ++i) {
            if ('1'+b[i]!=a[i-1]+b[i-1]){
                a+="1";
            } else{
                a+="0";
            }
        }

        cout<<a<<"\n";
    }
}