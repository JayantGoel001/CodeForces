#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int *ar = new int[n];
    vector<int> v;
    for (int i = 0; i <n; ++i) {
        cin>>ar[i];
        ar[i] = 5 - ar[i];
        if(ar[i]>=k){
            v.push_back(ar[i]);
        }
    }

    cout<<v.size()/3;
}