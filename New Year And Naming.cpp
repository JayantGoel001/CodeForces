#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    string *s = new string[n+1];
    string *t = new string[m+1];
    for (int i = 1; i < n+1; ++i) {
        cin>>s[i];
    }
    for (int i = 1; i < m+1; ++i) {
        cin>>t[i];
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; ++i) {
        int y;
        cin>>y;
        int alpha,beta;
        alpha = y%n;
        beta = y%m;
        if(alpha==0){
            alpha = n;
        }
        if (beta==0){
            beta = m;
        }
        cout<<s[alpha]+t[beta]<<"\n";
    }
}