#include <iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int count =0 ;
    for (int i = 1; i <=n; ++i) {
        if(x%i==0 && (double)n*(double)i>=x){
            count++;
        }
    }
    cout<<count;
}