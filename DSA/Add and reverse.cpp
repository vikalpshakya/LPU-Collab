// QUESTION :  Rajesh wants to add elements of two arrays and display the merged array. Help
//             Rajesh by writing a program to take input for two arrays and add both array elements
//             and display the merged array in reverse order.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int size1;
    cin >> size1; 
    vector<int>vec1(size1);
    for( int i = 0; i < size1; i++){
        cin >> vec1[i];
    }
    int size2;
    cin >> size2;
    vector<int>vec2(size2);
    for(int i =0; i < size2; i++){
        cin>> vec2[i];
    }
    vector<int>ans(max(size1,size2));
    for(int i=0 ; i < max(size1,size2); i++){
        int val1 =(i<size1)?vec1[i]:0;
        int val2 =(i<size2)?vec2[i]:0;
        ans[i] = val1+val2;
    }
    
    reverse(ans.begin(),ans.end());
    for( int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    
}
