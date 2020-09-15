#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;

        long long int output = 2*(pow(2,n/2-1)-1) + pow(2,n) - pow(2,n/2)*(pow(2,n/2)-1);
        cout<<output<<"\n";
    }
}