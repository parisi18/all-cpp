#pragma once

#include <string>
#include <iostream>
#include "Holder.hpp"

class Account
{
public:
    Account(int number, Holder holder);
    virtual ~Account();
    virtual float get_interest_rate() const = 0; // Pure virtual function
    virtual short int get_account_type() const = 0; // Pure virtual function
    bool withdraw(float value);
    bool deposit(float value);
    float getBalance() const;
    int get_number() const;
    static int get_total_accounts();
    Holder get_holder() const;
    void operator+=(float value);

public:
    // 1 - Checking Account
    // 2 - Savings Account
    short int m_account_type;
private:
    static int total_accounts;
    float m_interest_rate = 0.05;
    Holder m_holder;
protected:
    int m_number;
    float m_balance;
};