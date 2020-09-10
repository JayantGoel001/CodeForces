#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string str;
    cin>>str;
    vector<string> v;
    int x =str.find("WUBWUB");
    while (x!=string::npos){
        if (x==0){
            str.replace(x,3,"");
        }else {
            str.replace(x, 3, "");
        }
        x= str.find("WUBWUB");
    }
    x = str.find("WUB");
    while (x!=string::npos) {
        if (x==0){
            str.replace(x,3,"");
        }
        else {
            str.replace(x, 3, " ");
        }
        x= str.find("WUB");
    }
    cout<<str;
}