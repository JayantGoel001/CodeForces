#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int output = 0;
    for(int i=0;i<n;i++){
        int from = int(str1[i]);
        int to = int(str2[i]);
        int z = abs(to-from);
        if(z>5){
            z = 10-z;
        }
        output+=z;
    }
    cout<<output;
}

