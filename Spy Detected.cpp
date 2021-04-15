#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        bool found = false;
        for (int i = 1; i <n-1 ; ++i) {
            if (ar[i]!=ar[i-1] && ar[i]!=ar[i+1]){
                cout<<i+1<<"\n";
                found = true;
            }
        }
        if (!found){
            if (ar[0]!=ar[1]){
                cout<<1<<"\n";
            } else{
                cout<<n<<"\n";
            }
        }
    }
}