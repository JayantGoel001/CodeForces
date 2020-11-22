#include <iostream>

int eval(int a);

using namespace std;

int main(){
    int a;
    cin>>a;
    int x = eval(a);
    cout<<x;
}

int eval(int a) {
    int num=a;
    int k =0;
    while (true) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum%4==0){
            break;
        }
        k++;
        num = a+k;
    }
    return a+k;
}
