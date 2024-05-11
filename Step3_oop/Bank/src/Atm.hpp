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
    void show_menu();
    void deposit(int amount);
    void withdraw(int amount);
    void show_logged_menu();
    void create_account_prompt();
    int getBalance();
private:
    AccountManager* m_account_manager = nullptr;
    Account* m_logged_account = nullptr;
};