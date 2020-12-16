#include <iostream>
#include <string>
using namespace std;
int main(){
    int TOTAL = 1000;
    string str="";
    int i = 1;
    while (str.length()<=TOTAL){
        str.append(to_string(i));
        i+=1;
    }
    int n;
    cin>>n;
    cout<<str[n-1];
}