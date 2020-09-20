#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    string string1="";
    int count = 0;
    map<char ,char> m;
    m.insert(make_pair('a','b'));
    m.insert(make_pair('b','a'));
    for (int i = 0; i < n; i+=2) {
        if (str[i]==str[i+1]){
            count++;
            string1 = string1+ m[str[i]] + str[i+1];
        } else{
            string1 = string1 + str[i] +str[i+1];
        }
    }
    cout<<count<<"\n";
    cout<<string1;
}