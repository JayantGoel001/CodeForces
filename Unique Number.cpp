#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        if (x<10){
            cout<<x<<"\n";
        } else if (x>45){
            cout<<-1<<"\n";
        } else{
            int n = x;
            vector<int> v;
            int bigEl = 9;
            int sum = 0;
            while (n!=sum){
                if ((n-sum)>bigEl){
                    sum+=bigEl;
                    v.push_back(bigEl);
                    bigEl--;
                } else{
                    v.push_back(n-sum);
                    sum=n;
                }
            }
            for (int j = v.size()-1; j >=0 ; j--) {
                cout<<v[j]<<"";
            }
            cout<<"\n";
        }
    }
}