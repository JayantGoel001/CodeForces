#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    int count=0;
    cin>>n>>m;
    for (int a = 0; a <=sqrt(n); ++a)
    {
        for (int b = 0; b <=sqrt(m); ++b) {
            if (a*a+b==n && a+b*b==m){
                count++;
            }
        }
    }
    cout<<count;
}
