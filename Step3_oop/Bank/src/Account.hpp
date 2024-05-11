#pragma once

#include <string>
#include <iostream>
#include "Holder.hpp"

class Account
{
public:
    Account(int number, Holder holder);
    ~Account();
    void withdraw(float value);
    void deposit(float value);
    float getBalance() const;
    int get_number() const;
    Holder get_holder() const;
    static int get_total_accounts();
private:
    static int total_accounts;
    int m_number;
    Holder m_holder;
    float m_balance;
};