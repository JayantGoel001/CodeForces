#include <iostream>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        set<int> s;
        for (int j = 0; j < n; ++j) {
            int x;
            cin>>x;
            s.insert(x);
        }
        if (s.size()!=n){
            cout<<"0\n";
        }else{
            int min = INT16_MAX;
            int *ar= new int[n];
            int k=0;
            for (auto j = s.begin(); j!=s.end(); ++j) {
                ar[k++] = (*j);
            }
            for (int j = 0; j < n-1; ++j) {
                if((ar[j+1]-ar[j])<min){
                    min = (ar[j+1]-ar[j]);
                }
            }
            cout<<min<<"\n";
        }
    }
}