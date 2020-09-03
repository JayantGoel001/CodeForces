#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int *ar = new int[n];
        int oddNum = 0;
        int sum=0;
        for (int j=0;j<n;j++){
            cin>>ar[j];
            if(ar[j]%2==1){
                oddNum++;
            }
            sum+=ar[j];
        }

        if((n%2==1 && oddNum%2==1) || sum%2==1){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }

    }
}