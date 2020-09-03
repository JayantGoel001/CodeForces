#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2==0)
        {
            cout<<a/2<<" "<<a/2<<endl;
        }
        else{
            cout<<"1"<<" "<<a-1<<endl;
        }
    }
}

