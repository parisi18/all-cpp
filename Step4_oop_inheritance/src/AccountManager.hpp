#include <iostream>
#include <string>
#include "Holder.hpp"
#include "Account.hpp"
#include "Cpf.hpp"
#include <vector>

class AccountManager{
public:
    AccountManager();
    ~AccountManager();
    void init_atm();
    void show_menu();
    Account* create_account();
    void deposit(int account_index, int amount);
    void withdraw(int account_index, int amount);
    int get_account_number(Account* account);
    int get_balance(int account_index);
    bool available_accounts();
    Account* get_account(int account_index);
    Account* login(int account_index);

private:
    static int account_index;
    std::vector<Account*> m_accounts;
};