#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    bool *visited= new bool [m+1];
    bool yes= true;
    bool no = false;
    for (int i = 1; i < m+1; ++i) {
        visited[i]= no;
    }
    for (int i = 0; i < n; ++i) {
        int l,r;
        cin>>l>>r;
        for (int j = l; j <=r; ++j) {
            visited[j]=yes;
        }
    }
    int count =0;
    for (int i = 1; i < m+1; ++i) {
        if (visited[i]==no){
            count++;
        }
    }
    cout<<count<<"\n";
    for (int i = 1; i <m+1; ++i) {
        if (visited[i]==no){
            cout<<i<< " ";
        }
    }

}
