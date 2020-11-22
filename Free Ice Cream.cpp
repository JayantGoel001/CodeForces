#include <iostream>
#include <string>
#define ll long long int
using namespace std;
int main(){
    ll n,x;
    cin>>n>>x;
    int distress=0;
    for (int i = 0; i < n; ++i) {
        ll di;
        string ch;
        cin>>ch>>di;
        if (ch=="+"){
            x+=di;
        } else if (ch=="-"){
            if (x>=di){
                x-=di;
            } else{
                distress++;
            }
        }
    }
    cout<<x<<" "<<distress;
}