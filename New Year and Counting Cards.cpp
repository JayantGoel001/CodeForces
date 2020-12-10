#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    } else {
        return false;
    }
}

bool isOne(char ch) {
    if (ch=='1'||ch=='3'||ch=='5'||ch=='7'||ch=='9'){
        return true;
    } else {
        return false;
    }
}

int main(){
    string str;
    cin>>str;
    int count = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (isVowel(str[i]) || isOne(str[i])){
            count++;
        }
    }
    cout<<count;
}