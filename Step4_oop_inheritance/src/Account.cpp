#include "Account.hpp"

int Account::total_accounts = 0;

Account::Account(int number, Holder holder) 
    : m_number(number), m_holder(holder) {
        total_accounts++;
    }

Account::~Account(){
    total_accounts--;
}

void Account::withdraw(float value){
    
    if(value < 0){
        std::cout << "Invalid value" << std::endl;
        return;
    }

    if(value > this->m_balance){
        std::cout << "Insufficient funds" << std::endl;
        return;
    }
    
    this->m_balance -= value;
}

void Account::deposit(float value){
    if(value < 0){
        std::cout << "Invalid value" << std::endl;
        return;
    }

    this->m_balance += value;
}

float Account::getBalance() const{
    return m_balance;
}

float show_balance(const Account &account){
    float balance = account.getBalance();
    std::cout << "Account balance: " << balance << std::endl;
    return balance;
}

int Account::get_total_accounts(){
    return total_accounts;
}

int Account::get_number() const{
    return m_number;
}

Holder Account::get_holder() const{
    return m_holder;
}