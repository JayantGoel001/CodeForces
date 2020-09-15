#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,k;
        cin>>n>>k;
        int *ar = new int[n];
        int *br = new int[n];
        int min = INT16_MAX;
        int sum = 0;

        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            if(min>ar[j]){
                min= ar[j];
            }
            sum+=ar[j];
        }
        for (int j = 0; j < n; ++j) {
            cin>>br[j];
        }

        sort(ar,ar+n);
        sort(br,br+n);
        vector<int> v;
        for (int j = 0; j < n; ++j) {
            if(br[j]>min){
                v.push_back(br[j]);
            }
        }
        int j=0;
        int maxSum = sum;
        while (k!=0 && !v.empty()){
            sum+=v[v.size()-1];
            v.pop_back();
            sum-=ar[j];
            if(sum>maxSum){
                maxSum = sum;
            }
            j++;
            k--;
        }
        cout<<maxSum<<"\n";


    }
    //2 2
    //1 4
    //3 2
}