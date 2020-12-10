#include <iostream>
#include <cmath>

using namespace std;
int main(){
    float x;
    cin>>x;
    bool found = false;
    for (int a = 1; a <= x ; ++a) {
        for (int b = 1; b <= a ; ++b) {
            if ( a%b == 0 && a * b > x && a / b < x){
                cout<<a<<" "<<b;
                found = true;
                break;
            }
        }
        if (found){
            break;
        }
    }
    if (!found){
        cout<<"-1";
    }

}