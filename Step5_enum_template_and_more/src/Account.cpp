#include "Account.hpp"

int Account::total_accounts = 0;

Account::Account(int number, Holder holder) 
    : m_number(number), m_holder(holder), m_balance(0){
        total_accounts++;
    }

Account::~Account(){
    total_accounts--;
}

bool Account::withdraw(float value){
    
    if(value < 0){
        std::cout << "Invalid value" << std::endl;
        return false;
    }

    float tax = value * get_interest_rate();
    float total_value = value + tax;

    if(total_value > m_balance){
        std::cout << "Insufficient funds" << std::endl;
        return false;
    }
    
    m_balance -= total_value;

    return true;
}

bool Account::deposit(float value){
    if(value < 0){
        std::cout << "Invalid value" << std::endl;
        return false;
    }

    m_balance += value;

    return true;
}

void Account::operator+=(float value){
    deposit(value);
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

float Account::get_interest_rate() const{
    return m_interest_rate;
}

short int Account::get_account_type() const{
    return m_account_type;
}