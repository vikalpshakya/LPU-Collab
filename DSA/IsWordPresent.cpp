/*  QUESTION:     You are developing a text analysis tool for a language processing system. As part of
                  the system, you need to implement a feature that determines whether a specific word
                  is present in a given sentence.
                  Write a program that prompts the user to enter a sentence and a target word using
                  linear search. Write a function called isWordPresent() to search for the target word
                  within the sentence. If the target word is found, the program should display a
                  message indicating its presence. Otherwise, it should display a message indicating
                  that the target word is not present in the given sentence                           */


#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){
    string line;
    getline(cin,line);
    string word;
    cin >> word;
    bool isThere = false;
    for( int i = 0; i < line.length();i++){
        if(line.substr(i,word.length())==word){
            isThere = true;
            break;
        }
    }
    if(isThere == true)
        cout << "The word '"<<word<<"' is present in the given sentence.";
    else
        cout << "The word '"<< word << "' is not present in the given sentence.";
}











  
    if(isThere == true)
        cout << "The word '"<<word<<"' is present in the given sentence";
    else
        cout << "The word '"<< word << "' is not present in the sentence";
}
