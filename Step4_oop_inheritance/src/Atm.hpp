#pragma once

#include <iostream>
#include <string>

#include "AccountManager.hpp"
#include "Account.hpp"
#include "Holder.hpp"
#include "Cpf.hpp"

class Atm{
public:
    Atm();
    ~Atm();
    void init_atm();
    inline void show_menu();
    inline void show_logged_menu();
    void deposit(int amount);
    void withdraw(int amount);
    void create_account_prompt();
    int getBalance();
private:
    AccountManager* m_account_manager = nullptr;
    Account* m_logged_account = nullptr;
};