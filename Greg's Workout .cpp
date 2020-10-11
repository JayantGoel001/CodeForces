#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int chest,biceps,back;
    chest=0;
    biceps=0;
    back=0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        if (i%3==0){
            chest+=x;
        }else if(i%3==1){
            biceps+=x;
        }else{
            back+=x;
        }
    }
    map<int,string> m;
    m[chest] = "chest";
    m[biceps] = "biceps";
    m[back] = "back";
    cout<<m[max(chest,max(biceps,back))];
}
