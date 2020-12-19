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
        vector<int> countRed ;
        vector<int> countBlue;
        for (int j = 0; j < n; ++j) {
            int count = 0;
            for (int k = 0; k < n; ++k) {
                if (vred[j]>vblue[k]){
                    count++;
                }
            }
            countRed.push_back(count);
        }
        for (int j = 0; j < n; ++j) {
            int count = 0;
            for (int k = 0; k < n; ++k) {
                if (vred[j]<vblue[k]){
                    count++;
                }
            }
            countBlue.push_back(count);
        }
        int countR = 0;
        int countB = 0;
        for (int j = 0; j < n; ++j) {
            if (countRed[j]>countBlue[j]){
                countR++;
            } else if (countBlue[j]>countRed[j]){
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