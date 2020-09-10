#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j+1<n && str[j]=='B' && str[j+1]=='G')
            {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
                j++;
            }
        }
    }
    cout<<str;
}