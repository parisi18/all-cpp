#include "AccountManager.hpp"

AccountManager::AccountManager(){}

AccountManager::~AccountManager(){
    for (auto account : m_accounts)
        delete account;
}

Account* AccountManager::create_account(){
    std::string holder_cpf, holder_name, holder_password;

    std::cout << "Please, enter a CPF with this example format 123.456.789-10: " << std::endl;
    std::cin >> holder_cpf;

    //TODO: Validate CPF

    std::cout << "Please, enter a name: " << std::endl;
    std::cin >> holder_name;
    
    //TODO: Validate name


    std::cout << "Please, enter a password: " << std::endl;
    std::cin >> holder_password;

    //TODO: Store and validate password

    std::cout << "Creating an account for " << holder_name << " with CPF: " << holder_cpf << "." << std::endl;
    Holder holder(Cpf(holder_cpf), holder_name, holder_password);

    std::cout << "Select the account type: " << std::endl;
    std::cout << "1 - Savings Account" << std::endl;
    std::cout << "2 - Checking Account" << std::endl;
    std::cout << "Option: ";
    int option;
    std::cin >> option;

    Account* created_account = selectAccountType(option, holder, m_accounts);
    std::cout <<"Account created with number: " << created_account->get_number() << "." << std::endl;

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

    std::variant<Account::WithdrawReturn, float> withdraw_return = account->withdraw(amount);

    auto balance = std::get_if<float>(&withdraw_return);

    if(auto balance = std::get_if<float>(&withdraw_return)){
        std::cout << "Withdraw completed." << std::endl;
        std::cout << "New balance: " << *balance << std::endl;
        std::cout << std::endl;
        return;
    }else if(std::get<Account::WithdrawReturn>(withdraw_return) == Account::WithdrawReturn::INSUFICIENT_FUNDS){
        std::cout << "Withdraw failed: Insufficient funds." << std::endl;
        std::cout << std::endl;
        return;
    }else if(std::get<Account::WithdrawReturn>(withdraw_return) == Account::WithdrawReturn::NEGATIVE_VALUE){
        std::cout << "Withdraw failed: Negative value." << std::endl;
        std::cout << std::endl;
        return;
    }

    return;
}

float AccountManager::get_balance(int account_index){
    Account* account = get_account(account_index);
    return account->getBalance();
}

std::pair<Login::Response, Account*> AccountManager::login(int account_index, std::string password){
    
    try {
        Account* account = get_account(account_index);
        if(!account){
            std::cout << "Invalid account." << std::endl;
            std::cout << std::endl;
            throw Login::Response::INVALID_ACCOUNT;
        }

        if(!account->get_holder().authenticate(password)){
            std::cout << "Invalid password." << std::endl;
            std::cout << std::endl;
            throw Login::Response::INVALID_PASSWORD;
        }
        
        return std::make_pair(Login::Response::SUCCESS, account);

    } catch(Login::Response& response) {
        return {response, nullptr};
    } catch(...) {
        std::cout << "An unknown error occurred." << std::endl;
        return std::make_pair(Login::Response::UNKNOWN_ERROR, nullptr);
    }
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

void AccountManager::transfer(int account_index, int account_index_dest){
    Account* account = get_account(account_index);
    Account* account_dest = get_account(account_index_dest);

    if(!account || !account_dest || account == account_dest){
        std::cout << "Invalid accounts." << std::endl;
        std::cout << std::endl;
        return;
    }

    std::cout << "Enter the amount to transfer: ";
    int amount;
    std::cin >> amount;

    auto withdraw_return = account->withdraw(amount);
    auto balance = std::get_if<float>(&withdraw_return);

    if(!balance){
        std::cout << "Transfer failed." << std::endl;
        std::cout << std::endl;
        return;
    }
    
    if(!account_dest->deposit(amount)){
        std::cout << "Transfer failed." << std::endl;
        std::cout << std::endl;
        return;
    }

    std::cout << "Transfer completed." << std::endl;
    std::cout << std::endl;
}

void AccountManager::manager_login(){
    std::cout << "Manager CPF: " << std::endl;
    std::string cpf;
    std::cin >> cpf;
    
}
