#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        map<int,int> m;
        int x,y,z;
        cin>>x>>y>>z;
        m[x]+=1;
        m[y]+=1;
        m[z]+=1;


        if(m.size() == 1 ){
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else if(m.size() == 2){
            int found = 1;
            int maxEle = max(x,max(y,z));
            int secondNum = x+y+z - 2*maxEle;
            for(auto & item : m){
                if(item.first == maxEle && item.second == 2){
                    found = 0;
                    cout<<"YES"<<endl;
                    cout << (item.first) << " " << (secondNum) << " " << (secondNum) << endl;
                    break;
                }
            }
            if(found==1){
                cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}