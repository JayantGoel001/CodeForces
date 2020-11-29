#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        int x = abs(1-r) + abs(1-c);
        int y = abs(1-c) + abs(n-r);
        int z = abs(1-r) + abs(m-c);
        int w = abs(n-r) + abs(m-c);
        cout<<max(x,max(y,max(w,z)))<<"\n";
    }
}