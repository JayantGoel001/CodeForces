#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,vector<int>> m;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        if (m.count(x)==0){
            m.insert(make_pair(x,vector<int>()));
        }
        m[x].push_back(i);
    }

    if(m.size()==3) {
        int min = INT32_MAX;
        for (auto i = m.begin(); i != m.end(); i++) {
            int x = (i->second).size();
            if (x < min) {
                min = x;
            }
        }

        cout << min << "\n";

        for (int i = 0; i < min; ++i) {
            for (int j = 1; j <= 3; ++j) {
                cout << m[j][i] + 1 << " ";
            }
            cout << "\n";
        }
    }else{
        cout<<"0\n";
    }
}