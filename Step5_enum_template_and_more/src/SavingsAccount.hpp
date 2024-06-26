#pragma once

#include "Account.hpp"
#include "Holder.hpp"
#include <iostream>
#include <string>

class SavingsAccount final : public Account
{
public:
    SavingsAccount(int number, Holder holder);
    ~SavingsAccount();
    float get_interest_rate() const override; 
    short int get_account_type() const override;
    int get_number() const;

private:
    float m_interest_rate = 0.03;
    short int m_account_type = 1;
};