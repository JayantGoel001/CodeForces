#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        float n,k;
        cin>>n>>k;
        if (ceil(n/2)-1>=k){
            int number = 0;
            int i =1;
            int x = 0;
            while (x<n) {
                if (x%2!=0 && number<k){
                    cout<<n-number<<" ";
                    number++;
                } else{
                    cout<<i<<" ";
                    i+=1;
                }
                x++;
            }
            cout<<"\n";
        } else{
            cout<<"-1\n";
        }
    }
}