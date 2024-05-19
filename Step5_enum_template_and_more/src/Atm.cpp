#include "Atm.hpp"

Atm::Atm(){
    m_account_manager = new AccountManager();
}

Atm::~Atm(){
    delete m_account_manager;
}

void Atm::show_menu(){
    std::cout << std::endl;
    std::cout << "Choose an option: " << std::endl;
    std::cout << "0 - Create account" << std::endl;
    std::cout << "1 - Login to account" << std::endl;
    std::cout << "7 - Manager login" << std::endl;
    std::cout << "8 - Exit" << std::endl;
    std::cout << "Option: ";
}

void Atm::show_logged_menu(){
    std::cout << std::endl;
    std::cout << "Choose an option: " << std::endl;
    std::cout << "2 - Deposit" << std::endl;
    std::cout << "3 - Withdraw" << std::endl;

    if(m_logged_account->get_account_type() == AccountType::Type::CHECKING)
        std::cout << "4 - Transfer" << std::endl; // "Transfer" option added

    std::cout << "5 - Show balance" << std::endl;
    std::cout << "6 - Logout" << std::endl;
    std::cout << "8 - Exit" << std::endl;
    std::cout << "Option: ";
}

void Atm::create_account_prompt(){
    std::cout << "Do you want to create an account? (y/n)" << std::endl;
    char answer;
    std::cin >> answer;
    if(answer == 'y')
        m_logged_account = m_account_manager->create_account();
}

void Atm::init_atm(){
    int option;
    int amount, destination_account;
    Account *new_account;
    std::pair<Login::Response, Account*> login_response;
    std::string password;
    
    do{
        if(m_logged_account){
            std::cout << std::endl;
            std::cout << "Logged account: " << m_account_manager->get_account_number(m_logged_account) << std::endl;
            std::cout << "Welcome " << m_logged_account->get_holder().get_name() << "!" << std::endl;
            show_logged_menu();
        }else
            show_menu();

        std::cin >> option;

        switch (option)
        {
        case AtmOption::Option::CREATE_ACCOUNT:
            new_account = m_account_manager->create_account();

            if(new_account){
                std::cout << "Do you want it to login now? (y/n)" << std::endl;
                char answer;
                std::cin >> answer;
                if(answer == 'y')
                    m_logged_account = new_account;
                else
                    break;
            }else
                std::cout << "Account not created, try again." << std::endl;
                std::cout << std::endl;

            break;
        case AtmOption::Option::LOGIN:
            int account_index;

            if(m_account_manager->available_accounts()){
                std::cout << "Enter the account number: ";
                std::cin >> account_index;

                std::cout << "Enter the password: ";
                std::string password;
                std::cin >> password;

                login_response = m_account_manager->login(account_index, password);

                if(login_response.first == Login::Response::SUCCESS)
                    m_logged_account = login_response.second;
                else if(login_response.first == Login::Response::INVALID_PASSWORD || login_response.first == Login::Response::INVALID_ACCOUNT)
                    break;
                else
                    break;

                if(!m_logged_account){
                    std::cout << "Account not found!" << std::endl;
                    create_account_prompt();
                    break;
                }
            }else
                create_account_prompt();
 
            break;
        case AtmOption::Option::DEPOSIT:
            std::cout << "Enter the amount to deposit: ";
            std::cin >> amount;
            m_account_manager->deposit(m_account_manager->get_account_number(m_logged_account), amount);
            break;
        case AtmOption::Option::WITHDRAW:
            std::cout << "Enter the amount to withdraw: ";
            std::cin >> amount;
            m_account_manager->withdraw(m_account_manager->get_account_number(m_logged_account), amount);
            break;
        case AtmOption::Option::TRANSFER:
            std::cout << "Enter the destination account: ";
            std::cin >> destination_account;
            m_account_manager->transfer(m_account_manager->get_account_number(m_logged_account), destination_account);
            break;
        case AtmOption::Option::SHOW_BALANCE:
            std::cout << "Balance: " << m_account_manager->get_balance(m_account_manager->get_account_number(m_logged_account)) << std::endl;
            std::cout << std::endl;
            break;
        case AtmOption::Option::LOGOUT:
            m_logged_account = nullptr;
            break;
        case AtmOption::Option::MANAGER_LOGIN:
            m_account_manager->manager_login();
            break;
        case AtmOption::Option::EXIT:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
        }
    } while (option != AtmOption::Option::EXIT);
}