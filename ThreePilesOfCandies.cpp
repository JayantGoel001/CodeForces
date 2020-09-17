#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int x = (a+b) - 2*min(a,b);
        long  long  int  output = max(a,b) + (c-x)/2;
        cout<<output<<"\n";
    }
}