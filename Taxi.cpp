#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *ar = new int[5]{0};
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        ar[x]+=1;
    }

    int numberOfTaxis = ar[4];
    if(ar[1]==ar[3]){
        numberOfTaxis+=ar[1];
    }
    else if(ar[1]>ar[3]){
        numberOfTaxis+=ar[3];
        ar[1] -=ar[3];
        if(ar[1]%4==0){
            numberOfTaxis+=ar[1]/4;
        }else{
            numberOfTaxis+=ar[1]/4+1;
        }
    }
    else{
        numberOfTaxis+=ar[1];
        ar[3]-=ar[1];
        numberOfTaxis+=ar[3];
    }

    if(ar[2]%2==0){
        numberOfTaxis+=ar[2]/2;
    }else{
        numberOfTaxis+=ar[2]/2+1;
    }
    cout<<numberOfTaxis;
}