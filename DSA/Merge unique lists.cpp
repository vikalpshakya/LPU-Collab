/*    Question:   You are working on a mathematics application that requires merging two sorted lists of numbers into a single
                  sorted list without any duplicates. Your task is to write a program that performs this merging operation on two
                  lists of numbers.
                  Your program should merge the numbers from the first and second lists into a single sorted list, removing
                  any duplicate numbers. The merged list should contain all the unique numbers, arranged in ascending order.
                  After merging the lists, your program should output the numbers in the merged list, according to the initial    
                  array.                                                                                                          */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int size1 , size2;
    cin >> size1;
    vector<int>vec1(size1);
    for(int i = 0; i < size1;i++){
        cin >> vec1[i];
    }
    cin >> size2;
    vector<int>vec2(size2);
    for(int i = 0; i < size2; i++){
        cin >> vec2[i];
    }
    vector<int>ans;
    int i = 0;
    for( i; i < min(size1,size2);i++){
        ans.push_back(vec1[i]);
        ans.push_back(vec2[i]);
    }
    while( i < size1){
        ans.push_back(vec1[i]);
        i++;
    }
    while(i < size2){
        ans.push_back(vec2[i]);
        i++;
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    for(int i = 0; i < size1 && i < ans.size(); i++){
        cout << ans[i]<<" ";
    }
    cout << endl;
    for(int i = size1;i<size1+size2 && i < ans.size();i++){
        cout << ans[i]<<" ";
    }
}
