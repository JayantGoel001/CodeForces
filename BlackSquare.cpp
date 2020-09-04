#include <iostream>
using namespace std;
int main(){
    int *ar = new int[5];
    for(int i=1;i<5;i++){
        cin>>ar[i];
    }
    string str;
    cin>>str;
    int sum=0;
    for(char i : str){
        sum+=ar[int(i)-48];
    }
    cout<<sum;
}