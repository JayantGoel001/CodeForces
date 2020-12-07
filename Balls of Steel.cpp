#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v;
        for (int j = 0; j < n; ++j) {
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        vector<float> distance;
        for (int j = 0; j < n; ++j) {
            int x = v[j].first;
            int y = v[j].second;
            float d = sqrt(x*x+y*y);
            distance.push_back(d);
        }
        for (int j = 0; j < n; ++j) {
            for (int l = j+1; l < n; ++l) {
                if (distance[j]>distance[l]){
                    pair<int,int> p = v[j];
                    v[j] = v[l];
                    v[l] = p;
                }
            }
        }
        bool resultExist = true;
        int count = 0;
        for (int j = 1; j < n; j+=3) {
            int firstExp = abs(v[j-1].first-v[j].first) + abs(v[j-1].second-v[j].second);
            int secExp=k+1;
            if (j+1<n){
                secExp = abs(v[j+1].first-v[j].first) + abs(v[j+1].second-v[j].second);
            }
            if (firstExp>k && secExp>k){
                resultExist= false;
                break;
            }
            count++;
        }
        if (resultExist){
            cout<<couSubstring Removal Gament<<"\n";
        } else{
            cout<<"-1\n";
        }
    }

}
