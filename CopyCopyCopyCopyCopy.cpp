#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        set<int> s;
        for(auto j=0; j < x; j++){
            int ele;
            cin>>ele;
            s.insert(ele);
        }
        cout<<s.size()<<endl;
    }
}


