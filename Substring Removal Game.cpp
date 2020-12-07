#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        string str;
        cin>>str;
        vector<int> v;
        int maxLen = 0;
        for (int j = 0; j < str.length(); ++j) {
            if (str[j]=='1' ){
                maxLen++;
            } else{
                v.push_back(maxLen);
                maxLen=0;
            }
        }
        v.push_back(maxLen);
        sort(v.begin(),v.end());
        int sum=0;
        for (int j = v.size()-1;j>=0;j-=2) {
            sum+=v[j];
        }
        cout<<sum<<"\n";
    }
}