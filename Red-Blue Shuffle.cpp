#include<iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        string red;
        string blue;
        cin>>red;
        cin>>blue;
        vector<int> vred;
        vector<int> vblue;
        for (int j = 0; j < n; ++j) {
            vred.push_back((int)red[j]);
        }
        for (int j = 0; j < n; ++j) {
            vblue.push_back((int)blue[j]);
        }
        int countR = 0;
        int countB = 0;
        for (int j = 0; j < n; ++j) {
            if (vred[j]>vblue[j]){
                countR++;
            } else if (vblue[j]>vred[j]){
                countB++;
            }
        }

        if (countR>countB){
            cout<<"RED\n";
        } else if (countB>countR){
            cout<<"BLUE\n";
        } else{
            cout<<"EQUAL\n";
        }
    }
}