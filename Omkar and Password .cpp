#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        vector<int> constant;
        long long  int *ar = new long long int[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        int c=0;
        for (int j = 0; j < n; ++j) {
            if (j>=1 && ar[j]!=ar[j-1]){
                c++;
            }
        }
        if (c==0){
            cout<<n<<"\n";
        }else{
            cout<<1<<"\n";
        }
    }
}