#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        int k =1;
        while (true){
            int w= 0;
            if (k%2==0){
                w = (k-1)*(k)/2;
            }
            else{
                w = (k-1)*((k-1)/2)+k;
            }
            if (w==x){
                cout<<k<<"\n";
                break;
            }
        }
    }
}