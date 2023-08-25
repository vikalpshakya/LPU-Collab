//QUESTION.   You are working on a project that involves merging two arrays and performing the sum between corresponding
//            elements. The arrays represent the daily sales of two different products over a week. Your task is to write a program that
//            takes input from the user for the two arrays and performs the difference between corresponding elements.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size1;
    cin >> size1;
    vector<int>vec1(size1);
    for(int i = 0 ; i < size1; i++){
        cin >> vec1[i];
    }
    int size2;
    cin >> size2;
    vector<int>vec2(size2);
    for( int i =0; i < size2; i++){
        cin >> vec2[i];
    }
    int i = 0;
    for( i ; i < min(size1,size2) ; i++){
        cout << -1*(vec1[i]+vec2[i])<<" ";
    }
    while(i < size1){
        cout << vec1[i] * -1 <<" ";
        i++;
    }
    while( i < size2){
        cout << vec2[i] *-1 <<" ";
    }
}
