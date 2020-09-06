#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        if(x%4!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}