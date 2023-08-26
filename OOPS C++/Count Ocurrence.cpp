// QUESTION.  Guna wants to write a program that counts the number of occurrences of a specific
//            character in a given string.
//            He decided to create a class called Occurrence to handle this task. In the class, a
//            string and character are its private attributes. Initialize the variables using a member
//            function. Define a member function countOccurrence() to count the number of times
//            the character occurs in the string

#include<iostream>
#include<string>
using namespace std;

class Occurrence {
    string inputString;
    char targetCharacter;
    public:
        Occurrence(string str, char character) : inputString(str), targetCharacter(character){}

        int countOcurrence(){
            int count = 0;
            for(char c : inputString){
                if(c == targetCharacter){
                    count ++;
                }
            }
            return count;
        }
};

int main(){
    string input;
    char character;
    cin >> input;
    cin >> character;
    Occurrence Obj(input , character);
    int result = Obj.countOcurrence();
    cout << result << endl;
}

