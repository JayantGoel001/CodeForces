#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int i = 0;
    int j = n-1;
    int sereja = 0;
    int dima = 0;
    bool chance = true;
    while(i<=j){
        int maxEle;
        if(ar[i]>ar[j]){
            maxEle = ar[i];
            i++;
        }
        else{
            maxEle = ar[j];
            j--;
        }
        if(chance){
            sereja+=maxEle;
        }
        else{
            dima+=maxEle;
        }
        chance = !chance;
    }
    cout<<sereja<<" "<<dima;
}


