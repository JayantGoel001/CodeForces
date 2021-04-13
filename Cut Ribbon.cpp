#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    float n,a,b,c;
    cin>>n>>a>>b>>c;
    int maxi = -1;
    int x = n/min(min(a,b),c);
    for(int i=x;i>=0;i--){
        for(int j=0;j<=i;j++){
            int k = abs((n-a*i + b*j)/c);
            if (a*i + b*j + c*k==n){
                maxi = max(maxi,i+j+k);
            }
        }
    }
    cout<<maxi;
}