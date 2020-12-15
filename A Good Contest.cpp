#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    int before[n],after[n];
    for (int i = 0; i < n; ++i) {
        cin>>str[i]>>before[i]>>after[i];
    }
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (before[i]>=2400 && after[i]>before[i]){
            cout<<"YES\n";
            found= true;
            break;
        }
    }
    if (!found){
        cout<<"NO\n";
    }
}