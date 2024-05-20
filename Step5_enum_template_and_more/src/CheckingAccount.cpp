#include "CheckingAccount.hpp"

CheckingAccount::CheckingAccount(int number, Holder holder) : Account(number, holder){}

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

    auto withdraw_return = Account::withdraw(value);

    if(auto balance = std::get_if<float>(&withdraw_return)){
        destination_account.deposit(value);
        std::cout << "Transfer successful" << std::endl;
        std::cout << "New balance: " << balance << std::endl;
    }
    else if(std::get<Account::WithdrawReturn>(withdraw_return) == Account::WithdrawReturn::INSUFICIENT_FUNDS)
        std::cout << "Transfer failed: Insufficient funds" << std::endl;
    else if(std::get<Account::WithdrawReturn>(withdraw_return) == Account::WithdrawReturn::NEGATIVE_VALUE)
        std::cout << "Transfer failed: Negative value" << std::endl;

    return;
}

void CheckingAccount::operator+=(Account& account){
    transfer(account.getBalance() / 2, *this);
}

int CheckingAccount::get_number() const{
    return m_number;
}