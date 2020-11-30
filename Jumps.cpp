#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        int w = ceil((sqrt(8*x+1)-1)/2);
        if (abs(x - w*(w+1)/2)==1){
            cout<<w+1<<'\n';
        } else{
            cout<<w<<"\n";
        }
    }
}