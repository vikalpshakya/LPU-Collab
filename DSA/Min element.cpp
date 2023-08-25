#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int>vec(size);
    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }
    int min = *min_element(vec.begin() , vec.end());
     cout << min ;
}
