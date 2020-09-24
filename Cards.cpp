#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *ar = new int[n];
    map<int,vector<int>> m;
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        if (m.count(ar[i])==0){
            m.insert(make_pair(ar[i],vector<int>()));
        }
        m[ar[i]].push_back(i+1);
    }
    sort(ar,ar+n);

    for (int i = 0; i < n/2; ++i) {
        int first = ar[i];
        int last = ar[n-i-1];
        int firstPos = m[first][m[first].size()-1];
        m[first].pop_back();
        int lastPos = m[last][m[last].size()-1];
        m[last].pop_back();
        cout<<firstPos<<" "<<lastPos<<"\n";
    }
}