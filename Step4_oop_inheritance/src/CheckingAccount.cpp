#include "CheckingAccount.hpp"

CheckingAccount::CheckingAccount(int number, Holder holder) : Account(number, holder)
{
    std::cout << "CheckingAccount created!" << std::endl;
}

CheckingAccount::~CheckingAccount(){}

float CheckingAccount::get_interest_rate() const
{
    return m_interest_rate;
}

short int CheckingAccount::get_account_type() const
{
    return m_account_type;
}

void CheckingAccount::transfer(float value, Account& destination_account){
    if(value < 0){
        std::cout << "Invalid value" << std::endl;
        std::cout << std::endl;
        return;
    }

    float tax = value * get_interest_rate();
    float total_value = value + tax;

    if(total_value > m_balance){
        std::cout << "Insufficient funds" << std::endl;
        std::cout << std::endl;
        return;
    }

    m_balance -= total_value;
    destination_account.deposit(value);
}