#include <iostream>
#include<vector>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        int k=0;
        vector<int> v;
        while (x!=0){
            int digit = x%10;
            if(digit!=0){
                int num = digit * pow(10,k);
                v.push_back(num);
            }
            k++;
            x/=10;
        }
        cout<<v.size()<<"\n";
        for (auto j=v.begin();j!=v.end();j++){
            cout<<*j<<" ";
        }
        cout<<"\n";
    }
}