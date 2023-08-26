// QUESTION :    Guna is developing a banking application that allows customers to deposit money
//               into their accounts. The bank provides each customer with an initial balance of 50
//               rupees. To facilitate the deposit process, Guna has created a class called


#include<iostream>
using namespace std;

class AddAmount{
    int n = 50;
    public:
        int initial(int x){
            n = 50;
            return n+x;
        }
};

int main(){
    
    AddAmount AddAmount;
    int num;
    cin >> num;
    int a = AddAmount.initial(num);
    cout << a;
}
