#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b-c==0 || b-c==1){
            cout<<b<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<b<<" "<<c<<" "<<c<<endl;
        }
    }
}