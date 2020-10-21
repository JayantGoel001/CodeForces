#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int ar[n];
        int count=0;
        int sum=0;
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            if (ar[j]==0){
                count++;
                ar[j]+=1;
            }
            sum+=ar[j];
        }
        if (sum==0){
            count++;
        }
        cout<<count<<"\n";
    }
}
