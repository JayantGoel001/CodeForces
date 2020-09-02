#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.length();
    char from = 'a';
    int output = 0;
    for(int i=0;i<n;i++){
        char to = str[i];
        int cc = abs(int(to) - int(from));
        if(cc>13){
            cc = 26-cc;
        }
        output += cc;
        from = to;
    }
    cout<<output;

}
