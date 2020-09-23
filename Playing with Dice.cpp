#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int first=0;
    int draw=0;
    int second=0;
    for (int i = 1; i <= 6; ++i) {
        if(abs(i-a)==abs(i-b)){
            draw++;
        }else if(abs(i-a)<abs(i-b)){
            first++;
        }else{
            second++;
        }
    }
    cout<<first<<" "<<draw<<" "<<second;
}