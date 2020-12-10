#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[3],d;
    cin>>a[0]>>a[1]>>a[2]>>d;
    sort(a,a+3);
    int count = 0;
    if (a[1]-a[0]<d){
        count += d-a[1]+a[0];
    }
    if (a[2]-a[1]<d){
        count += d-a[2] +a[1];
    }
    cout<<count;
}