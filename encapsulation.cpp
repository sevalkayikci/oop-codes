#include<iostream>

class BankAccount{
    private:
    double balance;
    public:
    void deposit (double amount){
        balance += amount;
    }
    double getBalance() const{
        return balance;
    }

};

int main(){

    BankAccount account;
    account.deposit(10000);
    std::cout<<"current balance: "<<account.getBalance()<<std::endl;
    account.deposit(30000);
    std::cout<<"current balance: "<<account.getBalance()<<std::endl;


    return 0;
}