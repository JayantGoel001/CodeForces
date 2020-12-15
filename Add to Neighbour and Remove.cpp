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
        vector<int> ar(n);
        for (int j = 0; j < n; ++j) {
            cin>>ar[i];
        }
        int j = 1;
        auto it = ar.begin()+1;
        while (j<n-1){
            if(ar[j-1]==ar[j+1]){
                j++;
                it++;
            } else{
                if (ar[j-1]>ar[j+1]){
                    ar[j+1]+=ar[j];
                    ar.erase(it);
                } else{
                    ar[j-1]+=ar[j];
                    ar.erase(it);
                }
                it++;
                break;
            }
            cout<<ar.size()<<"\n";
        }

    }
}