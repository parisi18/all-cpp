#pragma once

#include <string>
#include <iostream>
#include "Holder.hpp"

class Account
{
public:
    Account(std::string number, Holder holder);
    ~Account();
    void withdraw(float value);
    void deposit(float value);
    float getBalance() const;
    static int get_total_accounts();

private:
    static int total_accounts;
    std::string m_number;
    Holder m_holder;
    float m_balance;
};