#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int x=0;x<n;x++){
        int l,r;
        cin>>l>>r;
        if(l*2<=r){
            cout<<l<<" "<<2*l<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
}
