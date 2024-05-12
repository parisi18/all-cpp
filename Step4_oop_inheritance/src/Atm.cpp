#include "Atm.hpp"

Atm::Atm(){
    m_account_manager = new AccountManager();
}

Atm::~Atm(){
    delete m_account_manager;
}

void Atm::show_menu(){
    std::cout << "Choose an option: " << std::endl;
    std::cout << "0 - Create account" << std::endl;
    std::cout << "1 - Login to account" << std::endl;
    std::cout << "6 - Exit" << std::endl;
    std::cout << "Option: ";
}

void Atm::show_logged_menu(){
    std::cout << "Choose an option: " << std::endl;
    std::cout << "2 - Deposit" << std::endl;
    std::cout << "3 - Withdraw" << std::endl;
    std::cout << "4 - Show balance" << std::endl;
    std::cout << "5 - Logout" << std::endl;
    std::cout << "6 - Exit" << std::endl;
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
    int amount;
    Account *new_account;

    do{
        if(m_logged_account){
            std::cout << "Logged account: " << m_account_manager->get_account_number(m_logged_account) << std::endl;
            std::cout << "Welcome " << m_logged_account->get_holder().get_name() << "!" << std::endl;
            show_logged_menu();
        }else
            show_menu();

        std::cin >> option;

        switch (option)
        {
        case 0:
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

            break;
        case 1:
            int account_index;

            if(m_account_manager->available_accounts()){
                std::cout << "Enter the account number: ";
                std::cin >> account_index;

                m_logged_account = m_account_manager->login(account_index);

                if(!m_logged_account){
                    std::cout << "Account not found!" << std::endl;
                    create_account_prompt();
                    break;
                }
            }else
                create_account_prompt();
 
            break;
        case 2:
            std::cout << "Enter the amount to deposit: ";
            std::cin >> amount;
            m_account_manager->deposit(m_account_manager->get_account_number(m_logged_account), amount);
            break;
        case 3:
            std::cout << "Enter the amount to withdraw: ";
            std::cin >> amount;
            m_account_manager->withdraw(m_account_manager->get_account_number(m_logged_account), amount);
            break;
        case 4:
            std::cout << "Balance: " << m_logged_account->getBalance() << std::endl;
            break;
        case 5:
            m_logged_account = nullptr;
            break;
        case 6:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
        }
    } while (option != 6);
}