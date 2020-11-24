#include<iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Node{
public:
    char data;
    unordered_map<char,Node*> hashMap;
    bool isTerminal;
    Node(){
        data='\0';
        isTerminal= false;
    }
    Node(char d){
        data = d;
        isTerminal = false;
    }
};
class Trie{
public:
    Node *root;
    Trie(){
        root = new Node();
    }
    bool addWord(string word){
        Node* temp = root;
        for (int i = 0; i <word.length(); ++i) {
            char ch = word[i];
            if (word.length()-1 == i && temp->hashMap.count(ch)!=0){
                return false;
            }
            if (temp->hashMap.count(ch)==0){
                temp->hashMap[ch] = new Node(ch);
            } else{
                if (temp->hashMap[ch]->isTerminal){
                    return false;
                }
            }
            temp = temp->hashMap[ch];
        }
        temp->isTerminal = true;
        return true;
    }
};
int main(){

    int n;
    cin>>n;
    Trie *t = new Trie();
    string word[n];
    for (int i = 0; i < n; ++i) {
        cin>>word[i];
    }
    bool isGood = true;
    for (int i = 0; i < n; ++i) {
        isGood = t->addWord(word[i]);
        if (!isGood){
            cout<<"BAD SET\n";
            cout<<word[i];
            break;
        }
    }
    if (isGood){
        cout<<"GOOD SET";
    }
}