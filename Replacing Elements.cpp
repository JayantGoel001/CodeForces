#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n,d;
        cin>>n>>d;
        int *ar = new int [n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; ++i) {
            if (ar[i]<=d){
                v1.push_back(ar[i]);
            } else{
                v2.push_back(ar[i]);
            }
        }
        if (v2.size()==0){
            cout<<"YES\n";
        } else {
            sort(v1.begin(), v1.end());
            if (v1.size()>=2){
                if (v1[0]+v1[1]<=d){
                    cout<<"YES\n";
                } else{
                    cout<<"NO\n";
                }
            }else{
                cout<<"NO\n";
            }
        }
    }
}