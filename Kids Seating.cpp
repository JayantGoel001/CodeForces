#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v;
    int count = 0;
    int i = 4;
    while (true){
        v.push_back(i);
        i+=2;
        count++;
        if (count==400){
            break;
        }
    }
    for (i = 0; i < t; ++i) {
        int n;
        cin>>n;
        for (int j = n-1; j < 2*n-1; ++j) {
            cout<<v[j]<<" ";
        }
        cout<<"\n";
    }
}