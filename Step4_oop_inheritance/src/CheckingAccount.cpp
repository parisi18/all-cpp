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