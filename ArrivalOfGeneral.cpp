#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *ar = new int[n];
    int max=INT16_MIN;
    int min=INT16_MAX;
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        if(ar[i]>max){
            max = ar[i];
        }
        if(ar[i]<min){
            min = ar[i];
        }
    }
    int minOcc =0;
    int maxOcc = n;
    for (int i = 0; i < n; ++i) {
        if (ar[i]==min){
            minOcc = i;
        }
        if(ar[n-i-1]==max){
            maxOcc = n-i-1;
        }
    }
    if(minOcc<maxOcc){
        cout<<(n-minOcc-1) + maxOcc -1;
    }else{
        cout<<maxOcc + (n-minOcc-1);
    }
}