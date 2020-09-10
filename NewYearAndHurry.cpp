#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int tot = 240;
    tot-=k;
    tot = (tot - tot%5)/n;
    int output = (sqrt(1+8*tot) - 1)/2;
    cout<<output;
}