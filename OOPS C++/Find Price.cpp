// QUESTION:   Suma is developing a program to perform arithmetic operations on money values. The program uses a class
//             called Money to represent a monetary amount in terms of rupees and paisa.
//             Your task is to create the class Money with two attributes:
//             int rupee
//             int paisa
//             Include getters, setters, and constructors.
//             In the main method, initialize the values for the data members, get two amounts, and print their sum.\

#include<iostream>
using namespace std;
class Money{
    private:
    int rupee;
    int paisa;
    public:
    Money(int rupee , int paisa){
        this->rupee = rupee;
        this->paisa = paisa;
    }
    void setRupee(int r){
        rupee = r;
    }
    int getRupee(){
        return rupee;
    }
    void setPaisa(int p){
        paisa = p;
    }
    int getPaisa(){
        return paisa;
    }
    void printAmount(){
        cout << rupee <<"." << paisa << endl;
    }

};
int main(){
    int rupee1,paisa1,rupee2,paisa2;
    cin >> rupee1 >> paisa1;
    cin >> rupee2 >> paisa2;
    Money amount1(rupee1,paisa1);
    Money amount2(rupee2,paisa2);
    int totalRupee = amount1.getRupee() + amount2.getRupee();
    int totalPaisa = amount1.getPaisa() + amount2.getPaisa();
    totalRupee += totalPaisa/100;
    totalPaisa %= 100;
    Money totalAmount(totalRupee , totalPaisa);
    totalAmount.printAmount();
    return 0;
}


