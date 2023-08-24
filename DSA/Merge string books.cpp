// QUESTION :  A library has two arrays representing two different sections of books: fiction and non-fiction. Merge the arrays
//             to create a single catalog that includes all the books available in the library.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<string>ans;
    
    int nonFic;
    cin >> nonFic;
    cin.ignore();
    
    for(int i = 0; i < nonFic;i++){
        string line;
        getline(cin ,line);
        ans.push_back(line);
    }
    int fic;
    cin >> fic;
    cin.ignore();
    
    for( int i = 0; i < fic; i++ ){
        string line;
        getline(cin,line);
        ans.push_back(line);
    }
    cout << "Catalog: " << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    
}
