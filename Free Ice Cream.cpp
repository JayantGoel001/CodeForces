#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int distress=0;
    for (int i = 0; i < n; ++i) {
        int di;
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