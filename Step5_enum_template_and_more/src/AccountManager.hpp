#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <variant>

#include "Cpf.hpp"
#include "Holder.hpp"
#include "Account.hpp"
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"
#include "utils.hpp"
#include "Auth.hpp"

class AccountManager{
public:
    AccountManager();
    ~AccountManager();
    void init_atm();
    void show_menu();
    void deposit(int account_index, int amount);
    void withdraw(int account_index, int amount);
    void transfer(int account_index, int account_index_dest);
    int get_account_number(Account* account);
    float get_balance(int account_index);
    bool available_accounts();
    Account* create_account();
    Account* get_account(int account_index);
    std::pair<Login::Response, Account*> login(int account_index, std::string password);
    void manager_login();
    Account* selectAccountType(int account_ty, Holder& holder, std::vector<Account*>& m_accounts);

private:
    static int account_index;
    std::vector<Account*> m_accounts;
};