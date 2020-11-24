#include<iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Node{
public:
    char data;
    unordered_map<char,Node*> hashMap;
    bool isTerminal;
    int totalBranch;
    Node(){
        data='\0';
        totalBranch=0;
        isTerminal= false;
    }
    Node(char d){
        totalBranch = 0;
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
    void addWord(string word){
        Node* temp = root;
        for (int i = 0; i <word.length(); ++i) {
            char ch = word[i];
            if (temp->hashMap.count(ch)==0){
                temp->hashMap[ch] = new Node(ch);
            }
            temp = temp->hashMap[ch];
            temp->totalBranch = temp->totalBranch + 1;
        }
        temp->isTerminal = true;
    }
    int search(string word){
        Node* temp = root;
        for (int i = 0; i <word.length(); ++i) {
            char ch = word[i];
            if (temp->hashMap.count(ch)){
                temp = temp->hashMap[ch];
            }else{
                return 0;
            }
        }
        int count = temp->totalBranch;
        return count;
    }
};
int main(){

    int n;
    cin>>n;
    Trie *t = new Trie();
    for (int i = 0; i < n; ++i) {
        string op,word;
        cin>>op>>word;
        if (op=="add"){
            t->addWord(word);
        }else{
            cout<<t->search(word)<<"\n";
        }
    }
}