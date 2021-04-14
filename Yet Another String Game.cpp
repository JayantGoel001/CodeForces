#include<iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        string str;
        cin>>str;
        string output = "";
        for (int j = 0; j < str.length(); ++j) {
            if(j%2==0) {
                char x = 97;
                if(x==str[j]){
                    x++;
                }
                output+=x;
            }else{
                char x = 122;
                if (x==str[j]){
                    x--;
                }
                output+=x;
            }
        }
        cout<<output<<"\n";
    }
}