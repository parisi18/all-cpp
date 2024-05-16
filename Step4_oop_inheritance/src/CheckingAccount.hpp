#pragma once
#include "Account.hpp"
#include <iostream>

class CheckingAccount final : public Account{

public:
    CheckingAccount(int number, Holder holder);
    ~CheckingAccount();
    float get_interest_rate() const override;
    short int get_account_type() const override;
    void transfer(float value, Account &account);

private:
    float m_interest_rate = 0.01;
    short int m_account_type = 2;
};