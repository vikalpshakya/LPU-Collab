// QUESTION:  You are given a set of arrays, and you need to write a program to merge them into a
//             single array in the order they are given. The goal is to create a new array that contains
//             all the elements from the input arrays, maintaining the order of the elements as per
//             the given order 


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int numArrays;
    cin >> numArrays;
    vector<int>ans;
    while(numArrays--){
        int size;
        cin >> size;
        vector<int>vec(size);
        for(int i = 0; i < size; i++){
            cin >> vec[i];
            ans.push_back(vec[i]);
        }
    }
    cout << "Merged array: ";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " "; 
    }
}
