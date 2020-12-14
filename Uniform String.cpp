#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,k;
        cin>>n>>k;
        int times = n/k;
        int j=0;
        char ch = 'a';
        while (j<n%k){
            cout<<ch;
            j++;
        }
        while (j<n){
            for (int l = 0; l < times && j<n; ++l) {
                cout<<ch;
                j++;
            }
            ch +=1;
        }
        cout<<'\n';
    }
}