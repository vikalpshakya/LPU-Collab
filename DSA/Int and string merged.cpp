//   QUESTION:       You have an array of strings and another array of integers. Merge the two arrays such
//                   that the resulting array alternates between a string and an integer.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cin >> size;
    
    vector<string>vec(size);
    vector<int>vec1(size);
    
    cout << "Merged Array: ";
    
    for(int i =0; i < size; i++){
        cin.ignore();
        cin>>vec[i];
    }
    for(int i = 0; i < size; i++){
        cin >> vec1[i];
    }
    
    for(int i =0 ; i < size; i++){
        cout << vec[i] << " " << vec1[i] << " ";
    }
    return 0;
}
