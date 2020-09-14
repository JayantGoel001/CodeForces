#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        long long int x,y,n;
        cin>>x>>y>>n;
        long long int output = x*((n-y)/x)+y;
        cout<<output<<"\n";
    }
}