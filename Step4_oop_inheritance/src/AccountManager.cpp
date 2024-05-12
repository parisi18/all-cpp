#include "AccountManager.hpp"

AccountManager::AccountManager(){
}

AccountManager::~AccountManager(){
    for (auto account : m_accounts)
        delete account;
}

Account* AccountManager::create_account(){
    std::string holder_cpf, holder_name;

    std::cout << "Please, enter a CPF with this example format 123.456.789-10: " << std::endl;
    std::cin >> holder_cpf;

    //TODO: Validate CPF

    std::cout << "Please, enter a name: " << std::endl;
    std::cin >> holder_name;

    //TODO: Validate name

    std::cout << "Creating an account for " << holder_name << " with CPF: " << holder_cpf << "." << std::endl;
    Holder holder(Cpf(holder_cpf), holder_name);

    std::cout <<"Account created with number: " << Account::get_total_accounts() << "." << std::endl;
    Account* new_account = new Account(Account::get_total_accounts(), holder);
    m_accounts.push_back(new_account);

    return new_account;
}

void AccountManager::deposit(int account_index, int amount){
    Account* account = get_account(account_index);
    account->deposit(amount);
}

void AccountManager::withdraw(int account_index, int amount){
    Account* account = get_account(account_index);
    account->withdraw(amount);
}

int AccountManager::get_balance(int account_index){
    Account* account = get_account(account_index);
    return account->getBalance();
}

Account* AccountManager::login(int account_index){


    Account* account = get_account(account_index);
    if(!account)
        return nullptr;

    return account;
}

bool AccountManager::available_accounts(){

    std::cout << "Listing available accounts..." << std::endl;

    if(m_accounts.empty()){
        std::cout << "No accounts available." << std::endl;
        return false; 
    }

    for (auto account : m_accounts)
        std::cout << "Holder name: " << account->get_holder().get_name() << "." << " Account number: " << account->get_number() << std::endl << std::endl;

    return true;
}

int AccountManager::get_account_number(Account* account){
    return account->get_number();
}

Account* AccountManager::get_account(int account_index){
    
    if(m_accounts.empty() || account_index < 0 || account_index >= m_accounts.size())
        return nullptr;
    
    return m_accounts[account_index];
}
