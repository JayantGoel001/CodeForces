#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        if(i*(i+1)*(i+2)==6*n){
            cout<<i;
            break;
        }else if(i*(i+1)*(i+2)>6*n){
            cout<<i;
            break;
        }
    }
}
