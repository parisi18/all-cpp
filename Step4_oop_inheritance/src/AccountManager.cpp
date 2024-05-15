#include "AccountManager.hpp"

AccountManager::AccountManager(){}

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

    std::cout << "Select the account type: " << std::endl;
    std::cout << "1 - Savings Account" << std::endl;
    std::cout << "2 - Checking Account" << std::endl;
    std::cout << "Option: ";
    int option;
    std::cin >> option;

    Account* created_account = selectAccountType(option, holder, m_accounts);
    std::cout <<"Account created with number: " << Account::get_total_accounts() << "." << std::endl;

    if(created_account)
        std::cout << "Account created successfully!" << std::endl;
    else
        std::cout << "Account creation failed." << std::endl;

    return created_account;
}

Account* AccountManager::selectAccountType(int account_ty, Holder& holder, std::vector<Account*>& m_accounts){
    Account* new_account = nullptr;
    
    switch (account_ty)
    {
    case AccountType::Type::SAVINGS:
        std::cout << "Savings Account selected." << std::endl;
        new_account = new SavingsAccount(Account::get_total_accounts(), holder);
        m_accounts.push_back(new_account);
        break;
    case AccountType::Type::CHECKING:
        std::cout << "Checking Account selected." << std::endl;
        new_account = new CheckingAccount(Account::get_total_accounts(), holder);
        m_accounts.push_back(new_account);
        break;
    default:
        std::cout << "Invalid account type." << std::endl;
        break;
    }

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
        std::cout << "Holder name: " << account->get_holder().get_name() << "." << " Account number: " << account->get_number() << "." << " Account type: " << account->get_account_type() << std::endl;

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
