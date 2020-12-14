#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (str[i]=='0'){
            count++;
        } else{
            count--;
        }
    }
    if (count!=0){
        cout<<"1\n"<<str;
    } else{
        cout<<"2\n";
        cout<<str[0]<<" "<<str.substr(1);
    }
}