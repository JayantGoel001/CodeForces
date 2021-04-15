#include <iostream>
#include <map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        map<int,int> mp;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            if(mp.count(x)==0){
                mp[x]=0;
            }
            mp[x]++;
        }
        while (!mp.empty()){
            int countZero = 0;
            for(auto it=mp.begin();it!=mp.end();it++){
                if (it->second!=0) {
                    cout << it->first << " ";
                    mp[it->first]--;
                } else{
                    countZero++;
                }
            }
            if (countZero==mp.size()){
                break;
            }
        }
        cout<<"\n";
    }
}