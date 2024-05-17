#include "SavingsAccount.hpp"

SavingsAccount::SavingsAccount(int number, Holder holder) : Account(number, holder){}

SavingsAccount::~SavingsAccount(){}

float SavingsAccount::get_interest_rate() const{
    return m_interest_rate;
}

short int SavingsAccount::get_account_type() const{
    return m_account_type;
}

int SavingsAccount::get_number() const{
    return m_number;
}