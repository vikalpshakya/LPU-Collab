// You have multiple arrays containing student grades for different subjects. You want to
// merge these arrays and calculate the average grade for each student. Write a
// function that takes these arrays as input and returns an array with the average
// grades.

#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main(){
    int numStudents;
    cin >> numStudents;
    int num = 1;
    int size;
    cin >> size;
    cout << "Average grades: "<<endl;
    while(numStudents--){
        vector<int>vec(size);
        int sum = 0;
        for( int i = 0; i < size; i++){
            cin >> vec[i];
            sum+=vec[i];
        }
        cout << fixed << setprecision(1) << "Student " << num <<": "<< (float)(sum)/static_cast<float>(size) << endl;
        ++num;
    }
}
