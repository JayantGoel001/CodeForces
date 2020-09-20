#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        long long int a,b;
        cin>>a>>b;
        long long int x = abs(a-b);
        int output = 0;
        output += x/5;
        x%=5;
        output += x/2;
        x%=2;
        output += x;
        cout<<output<<"\n";
    }
}