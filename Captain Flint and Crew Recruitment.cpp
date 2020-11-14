#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        if (n<31){
            cout<<"NO\n";
        } else{
            cout<<"YES\n";
            if (n-30!=14 && n-30!=10 && n-30!=6) {
                cout << "14 10 6 " << (n - 30) << "\n";
            } else{
                cout<<"15 10 6 "<<(n-31)<<"\n";
            }
        }
    }
}