#include<iostream>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < d; ++i) {
        string str;
        cin>>str;
        if (str.find("0")!=string::npos){
            count++;
        } else{
            count = 0;
        }
        if (maxCount<count){
            maxCount = count;
        }
    }
    cout<<maxCount;
}