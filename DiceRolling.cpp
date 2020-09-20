#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        int output = 0;
        for (int j = 7; j >=2 ; --j) {
            output += x/j;
            x%=j;
        }
        if(x==0){
            cout<<output<<'\n';
        }else
        {
            cout<<output+1<<"\n";
        }
    }
}