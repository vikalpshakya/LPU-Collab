#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows;
    cin >> rows;
    int columns;
    cin >> columns;
    vector<vector<int>>matrix(rows,vector<int>(columns));
    for( int i = 0; i < rows; i++){
        for( int j = 0; j < columns; j++){
            cin >> matrix[i][j];
        }
    }
    int target;
    cin >> target;
    bool isThere = false;
    int row , col ;
    for( int i = 0 ; i < matrix.size(); i++){
        for( int j = 0 ; j < matrix[i].size(); j++){
           if(matrix[i][j] == target){
               isThere = true;
               row = i;
               col = j;
               break;
           } 
        }
    }
    if(isThere == true){
        cout << "["<<row<<"]"<<"["<<col<<"]";
    }
    else
        cout << "Element " << target << " not found.";   
}
