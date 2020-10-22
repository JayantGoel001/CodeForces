#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int q;
    cin>>q;
    for (int i = 0; i < q; ++i) {
        int n;
        cin>>n;
        int ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        sort(ar,ar+n);
        int no = 1;
        vector<int> v;
        for (int j = 0; j < n - 1; ++j) {
            if (abs(ar[j+1]-ar[j])==1){
                no++;
            }else{
                v.push_back(no);
                no=0;
            }
        }
        int minEle = INT32_MAX;
        for (auto j = v.begin(); j!=v.end(); ++j) {
            minEle = min(*j,minEle);
        }
        cout<<minEle<<"\n";
    }
}