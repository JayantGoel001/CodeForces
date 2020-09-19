#include<iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string secretNumber = to_string(rand() % 10000);
    cout<<"Choose A Secret Number(Between 1000 And 9999): \nStart Guessing ....\n";
    int count=0;

    map<char,vector<int>> secretNumberMap;
    for (int i = 0; i < 4; ++i) {
        if (secretNumberMap.count(secretNumber[i]) == 0){
            secretNumberMap.insert(make_pair(secretNumber[i], vector<int>()));
        }
        secretNumberMap[secretNumber[i]].push_back(i);
    }


    string str;
    while (true){
        map<char,vector<int>> temp=secretNumberMap;
        cin>>str;
        if (str.length()!=4){
            cout<<"Invalid Input!\n";
            continue;
        }
        int cows = 0;
        int bulls = 0;

        for (int i = 0; i < 4; ++i) {
            char x = str[i];
            if (secretNumberMap.count(x)!=0){
                vector<int> key = secretNumberMap[x];
                auto it = find(key.begin(),key.end(),i);
                if (it!=key.end()){
                    bulls++;
                    key.erase(it);
                    secretNumberMap[x] = key;
                }
            }
        }
        for (int i = 0; i < 4; ++i) {
            char x = str[i];
            if (secretNumberMap.count(x)!=0 && secretNumberMap[x].size()!=0){
               cows++;
            }
        }

        count++;
        if (bulls==4) {
            cout<<"Congratulations, You did It.\nYou took "<<count<<" to guess the number.\nSecret Number is "<<secretNumber<<"\n";
            break;
        }
        cout<<"Turn "<<count<<" : Your Guess "<<str<<" has "<<bulls<<" Bulls and "<<cows<<" cows.\n";
        secretNumberMap=temp;
    }
}