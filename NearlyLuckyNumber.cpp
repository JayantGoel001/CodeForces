#include <iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    long long int count = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='4' || str[i]=='7'){
            count++;
        }
    }
    bool isLucky = true;
    for (int i = count; i !=0; i=i/10) {
        int x= i%10;
        if (x== 4 or x==7){

        }else{
            isLucky= false;
            cout<<"NO";
            break;
        }
    }
    if (isLucky){
        cout<<"YES";
    }

}