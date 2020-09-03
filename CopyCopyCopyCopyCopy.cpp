#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        set<int> s;
        for(int i=0;i<x;i++){
            int ele;
            cin>>ele;
            s.insert(ele);
        }
        cout<<s.size()<<endl;
    }
}


