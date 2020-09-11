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

    int numberOfTaxis=0;
    for (int i = 4; i >=1; i--) {
        if(i==4){
            numberOfTaxis+=ar[4];
        }
        else if (i==3){
            numberOfTaxis+=ar[3];
            ar[1] -= min(ar[1],ar[3]);
        }
        else if(i==2){
            numberOfTaxis+=ar[2]/2;
            if(ar[2]%2==0){
                ar[2]=0;
            }else{
                ar[2]-=1;
                ar[1]-=2;
                numberOfTaxis++;
            }
        }
        else{
            if(ar[1]>0){
                if(ar[1]%4==0){
                    numberOfTaxis+=ar[1]/4;
                }else{
                    numberOfTaxis+=ar[1]/4+1;
                }
            }
        }
    }
    cout<<numberOfTaxis;

}